/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 28/05/2026
Objetivo    : Calcular o maior valor atingido na Sequência de Granizo (Conjectura de Collatz) a partir de um número inicial até que a sequência termine em 1
Aprendizado : <<<pratica c e usar recursão>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int granizo(int h, int max_atual) {
    if (h == 1) {
        return max(max_atual, 1);
    }
    
    max_atual = max(max_atual, h);
    
    if (h % 2 == 0) {
        return granizo(h / 2, max_atual);
    } else {
        return granizo(3 * h + 1, max_atual);
    }
}

int main() {
    int H;
    
    while (scanf("%d", &H) == 1 && H != 0) {
        printf("%d\n", granizo(H, 0));
    }
    
    return 0;
}
