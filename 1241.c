/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 07/05/2026
Objetivo    : Fazer um programa para verificar, à partir de dois valores muito grandes A e B, se B corresponde aos últimos dígitos de A.
Aprendizado : <<<fortificar o uso e entendimento de comandos como while,if,scanf,...>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        char A[1001], B[1001];
        scanf("%s %s", A, B);
        
        int lenA = strlen(A);
        int lenB = strlen(B);
        
        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            // Comparar os últimos lenB caracteres de A com B
            int encaixa = 1;
            for (int i = 0; i < lenB; i++) {
                if (A[lenA - lenB + i] != B[i]) {
                    encaixa = 0;
                    break;
                }
            }
            
            if (encaixa) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }
    
    return 0;
}
