/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : construir um programa simples de criptografia.
Aprendizado : <<<fortificar o uso e entendimento de comandos como while,getchar,fget,if,for...de forma mais complexa>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // consumir '\n'

    char str[1005];

    while (N--) {
        fgets(str, sizeof(str), stdin);

        int len = strlen(str);

        // remover '\n' do fgets
        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        // 1ª passada: desloca letras +3
        for (int i = 0; i < len; i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z')) {
                str[i] += 3;
            }
        }

        // 2ª passada: inverter string
        for (int i = 0; i < len / 2; i++) {
            char temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }

        // 3ª passada: metade em diante -1
        for (int i = len / 2; i < len; i++) {
            str[i] -= 1;
        }

        printf("%s\n", str);
    }

    return 0;
}
