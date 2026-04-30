/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 07/04/2026
Objetivo    : Fazera um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
Aprendizado : <<<Uso do scanf>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    int maiorAB, maiorABC;
    
    scanf("%d %d %d", &a, &b, &c);
    
    // Calcula o maior entre a e b usando a fórmula
    maiorAB = (a + b + abs(a - b)) / 2;
    
    // Calcula o maior entre maiorAB e c
    maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;
    
    printf("%d eh o maior\n", maiorABC);
    
    return 0;
}
