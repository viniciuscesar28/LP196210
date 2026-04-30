/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 29/04/2026
Objetivo    : Criar um programa que monte a tabuada de um número "N"
Aprendizado : <<<reforço da lógica de programação em C>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, N, i * N);
    }
    
    return 0;
}
