/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 14/04/2026
Objetivo    : Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
Aprendizado : <<<uso dos sinasi de maior e menor pra descobrir qual é variavel maior e a menor>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int soma = 0;
    int menor = (x < y) ? x : y;
    int maior = (x > y) ? x : y;
    
    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    printf("%d\n", soma);
    
    return 0;
}
