
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[101];
    char cor[20];
    char tamanho;
} Camisa;

int comparar(const void *a, const void *b) {
    Camisa *c1 = (Camisa *)a;
    Camisa *c2 = (Camisa *)b;

    // Ordena pela cor
    int cmp = strcmp(c1->cor, c2->cor);
    if (cmp != 0)
        return cmp;

    // Ordena pelo tamanho (G > M > P)
    if (c1->tamanho != c2->tamanho)
        return c2->tamanho - c1->tamanho;

    // Ordena pelo nome
    return strcmp(c1->nome, c2->nome);
}

int main() {
    int N;
    int primeiro = 1;

    while (scanf("%d", &N) && N != 0) {
        getchar(); // consumir '\n'

        Camisa camisas[60];

        for (int i = 0; i < N; i++) {
            fgets(camisas[i].nome, sizeof(camisas[i].nome), stdin);
            camisas[i].nome[strcspn(camisas[i].nome, "\n")] = '\0';

            char linha[30];
            fgets(linha, sizeof(linha), stdin);

            sscanf(linha, "%s %c", camisas[i].cor, &camisas[i].tamanho);
        }

        qsort(camisas, N, sizeof(Camisa), comparar);

        if (!primeiro)
            printf("\n");

        primeiro = 0;

        for (int i = 0; i < N; i++) {
            printf("%s %c %s\n",
                   camisas[i].cor,
                   camisas[i].tamanho,
                   camisas[i].nome);
        }
    }

    return 0;
}
