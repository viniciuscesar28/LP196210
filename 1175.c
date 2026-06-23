/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 16/06/2026
Objetivo    : Inverter um vetor de 20 variaveis trocando o primeiro pelo último, o segundo pelo penúltimo, e assim por diante
Aprendizado : <<<pratica de c>>>
Duvida      :
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N[20];
    int i, temp;
    
    // Ler os 20 valores
    for (i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    
    // Trocar os elementos (inverter o vetor)
    for (i = 0; i < 10; i++) {
        temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }
    
    // Imprimir o resultado
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}
