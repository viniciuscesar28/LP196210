/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/05/2026
Objetivo    : Calcular a quantidade de quilogramas de trigo que um monge receberia ao dispor grãos em X quadrados de um tabuleiro, dobrando a quantidade a cada quadrado
Aprendizado : <<<incrementar o conhecimento em C, usar recursão e trabalhar com números grandes>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

unsigned long long potencia(unsigned long long base, int expoente) {
    if (expoente == 0)
        return 1;
    return base * potencia(base, expoente - 1);
}

unsigned long long total_graos(int quadrados) {
    if (quadrados == 0)
        return 0;
    return potencia(2, quadrados - 1) + total_graos(quadrados - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        int X;
        scanf("%d", &X);
        unsigned long long graos = total_graos(X);
        unsigned long long kg = graos / 12000;
        printf("%llu kg\n", kg);
    }
    
    return 0;
}
