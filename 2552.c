/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 16/06/2026
Objetivo    : Substituir cada célula da matriz por 9 se tiver pão de queijo ou pela quantidade de pães de queijo em suas células adjacentes se não tiver
Aprendizado : <<<pratica de c>>>
Duvida      :
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N, M;
    while (scanf("%d %d", &N, &M) != EOF) {
        int tab[100][100];
        int i, j;
        
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++)
                scanf("%d", &tab[i][j]);
        
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                if (tab[i][j] == 1) {
                    printf("9");
                } else {
                    int count = 0;
                    if (i > 0 && tab[i-1][j] == 1) count++;
                    if (i < N-1 && tab[i+1][j] == 1) count++;
                    if (j > 0 && tab[i][j-1] == 1) count++;
                    if (j < M-1 && tab[i][j+1] == 1) count++;
                    printf("%d", count);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
