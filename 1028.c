/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 26/05/2026
Objetivo    : calcular o Máximo Divisor Comum (MDC) entre dois números, que representa o maior tamanho de pilha possível que pode ser formado igualmente para ambos os jogadores.
Aprendizado : <<<pratica c e usar recursão>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        int F1, F2;
        scanf("%d %d", &F1, &F2);
        printf("%d\n", mdc(F1, F2));
    }
    
    return 0;
}
