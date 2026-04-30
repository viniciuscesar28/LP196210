/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : <<<uso do else>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int valor, maior, posicao;
    int i;
    
    for(i = 1; i <= 100; i++) {
        scanf("%d", &valor);
        
        if(i == 1) {
            maior = valor;
            posicao = i;
        } else if(valor > maior) {
            maior = valor;
            posicao = i;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", posicao);
    
    return 0;
}
