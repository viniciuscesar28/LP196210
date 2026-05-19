/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 19/05/2026
Objetivo    : Ler um valor inteiro N que é o tamanho da matriz que deve ser impressa conforme o modelo fornecido.
Aprendizado : <<<pratica de c>>>
-------------------------------------------------------------------------- */
verssão normal:
#include <stdio.h>

int main() {
    int N;
    
    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i + j == N - 1) {
                    printf("2");
                } else if (i == j) {
                    printf("1");
                } else {
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}
verssão sem operador:
#include <stdio.h>

int main(void) {
    int N;
    
    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int dp = (i == j);          // 1 se diagonal principal, 0 caso contrário
                int ds = (i + j == N - 1);  // 1 se diagonal secundária, 0 caso contrário
                
                // Prioridade: dp(1) > ds(2) > resto(3)
                int val = dp * 1 + (1 - dp) * ds * 2 + (1 - dp) * (1 - ds) * 3;
                printf("%d", val);
            }
            printf("\n");
        }
    }
    
    return 0;
}
