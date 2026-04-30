/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : <<<uso de vetores>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int valores[100];
    int maior, posicao;
    int i;
    
    // Lê todos os 100 valores
    for(i = 0; i < 100; i++) {
        scanf("%d", &valores[i]);
    }
    
    // Encontra o maior valor e sua posição
    maior = valores[0];
    posicao = 1;
    
    for(i = 1; i < 100; i++) {
        if(valores[i] > maior) {
            maior = valores[i];
            posicao = i + 1;  // +1 porque a posição é 1-indexada
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);
    
    return 0;
}
