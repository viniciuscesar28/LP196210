/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 19/05/2026
Objetivo    : fazer um programa que leia a hora de iniciode um jogo e dê sua duração, sabendo que pode começar em um dia e acabr no seguinte, com duração mínima de 1h e máxima de 24.
Aprendizado : <<<praticar c>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

// Função para calcular a duração do jogo
int calcularDuracao(int inicio, int fim) {
    int duracao;
    
    if (inicio == fim) {
        // Jogo durou 24 horas (mesmo horário = dia completo)
        duracao = 24;
    } else if (fim > inicio) {
        // Jogo terminou no mesmo dia
        duracao = fim - inicio;
    } else {
        // Jogo cruzou a meia-noite
        duracao = (24 - inicio) + fim;
    }
    
    return duracao;
}

int main() {
    int inicio, fim, duracao;
    
    // Lê hora de início e hora de fim
    scanf("%d %d", &inicio, &fim);
    
    // Calcula a duração usando a função
    duracao = calcularDuracao(inicio, fim);
    
    // Imprime o resultado
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    
    return 0;
}
