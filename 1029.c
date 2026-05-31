/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 26/05/2026
Objetivo    : Calcular o n-ésimo número de Fibonacci recursivamente e contar quantas chamadas à função são necessárias para obtê-lo.
Aprendizado : <<<pratica de c e usar recursão>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int calls;

int fib(int n) {
    calls++;
    if (n == 0) 
        return 0;
    if (n == 1) 
        return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        int X;
        scanf("%d", &X);
        calls = 0;
        int result = fib(X);
        printf("fib(%d) = %d calls = %d\n", X, calls - 1, result);
    }
    
    return 0;
}
