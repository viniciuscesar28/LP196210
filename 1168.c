/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 19/05/2026
Objetivo    :  Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".
Aprendizado : <<<praticar c usando o comando switch>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        char numero[101];
        scanf("%s", numero);
        
        int total_leds = 0;
        
        for (int j = 0; j < strlen(numero); j++) {
            switch(numero[j]) {
                case '0':
                    total_leds += 6;
                    break;
                case '1':
                    total_leds += 2;
                    break;
                case '2':
                    total_leds += 5;
                    break;
                case '3':
                    total_leds += 5;
                    break;
                case '4':
                    total_leds += 4;
                    break;
                case '5':
                    total_leds += 5;
                    break;
                case '6':
                    total_leds += 6;
                    break;
                case '7':
                    total_leds += 3;
                    break;
                case '8':
                    total_leds += 7;
                    break;
                case '9':
                    total_leds += 6;
                    break;
            }
        }
        
        printf("%d leds\n", total_leds);
    }
    
    return 0;
}
