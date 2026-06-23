/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 16/06/2026
Objetivo    : Encontrar e exibir o menor valor de um vetor e sua posição
Aprendizado : <<<pratica de c>>>
Duvida      :
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N, i, menor, posicao;
    
    scanf("%d", &N);
    
    int X[N];
    
    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    
    menor = X[0];
    posicao = 0;
    
    for (i = 1; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    
    return 0;
}
