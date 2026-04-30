/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 23/04/2026
Objetivo    : Fazer uma cifra de cezar
Aprendizado : <<<uso de string para criptografia>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    
    // Lê a quantidade de casos de teste
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        char str[60];
        int n;

        // Lê a string codificada e o número de deslocamento
        scanf("%s", str);
        scanf("%d", &n);

        for (int i = 0; str[i] != '\0'; i++) {
            // Converte char para número (A=0, B=1, ..., Z=25)
            int val = str[i] - 'A';

            // Decodifica: subtrai n
            val = val - n;

            // Ajuste para números negativos (wrap-around)
            // Em C, o módulo de número negativo pode ser negativo.
            // Adicionamos 26 até ficar positivo.
            while (val < 0) {
                val += 26;
            }
            
            // Garante que está dentro de 0-25 (caso val >= 26, embora a lógica acima cubra)
            val = val % 26;

            // Converte de volta para char
            str[i] = 'A' + val;
        }

        printf("%s\n", str);
    }

    return 0;
}
