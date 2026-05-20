/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 19/05/2026
Objetivo    :  um software que deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. imprimir o que restou nos vetores, imprimindo primeiro os valores do vetor impar.
Aprendizado : <<<praticar c usando vetores>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int par[5], impar[5];
    int par_count = 0, impar_count = 0;
    int num;
    
    // Lê 15 valores
    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            // Número par
            par[par_count] = num;
            par_count++;
            
            // Se vetor par encheu, imprime e zera
            if (par_count == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                par_count = 0;
            }
        } else {
            // Número ímpar
            impar[impar_count] = num;
            impar_count++;
            
            // Se vetor ímpar encheu, imprime e zera
            if (impar_count == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                impar_count = 0;
            }
        }
    }
    
    // Imprime o que restou no vetor ímpar primeiro
    for (int i = 0; i < impar_count; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    
    // Imprime o que restou no vetor par
    for (int i = 0; i < par_count; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    
    return 0;
}
