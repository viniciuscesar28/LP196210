/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 16/06/2026
Objetivo    : verificar se matrizes fornecidas são soluções válidas para o jogo de Sudoku
Aprendizado : <<<noções complexas m c99 envolvendo o uso de matrizes e validação>>>
Duvida      :
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdbool.h>

// Função para validar se um array de 9 elementos contém os números de 1 a 9
bool validar_vetor(int vetor[9]) {
    bool vistos[10] = {false};
    for (int i = 0; i < 9; i++) {
        int num = vetor[i];
        if (num < 1 || num > 9 || vistos[num]) {
            return false;
        }
        vistos[num] = true;
    }
    return true;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int k = 1; k <= n; k++) {
        int matriz[9][9];
        bool valido = true;

        // Leitura da matriz 9x9
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        // 1. Validar Linhas
        for (int i = 0; i < 9 && valido; i++) {
            if (!validar_vetor(matriz[i])) {
                valido = false;
            }
        }

        // 2. Validar Colunas
        for (int j = 0; j < 9 && valido; j++) {
            int coluna[9];
            for (int i = 0; i < 9; i++) {
                coluna[i] = matriz[i][j];
            }
            if (!validar_vetor(coluna)) {
                valido = false;
            }
        }

        // 3. Validar Regiões 3x3
        for (int reg_i = 0; reg_i < 9 && valido; reg_i += 3) {
            for (int reg_j = 0; reg_j < 9 && valido; reg_j += 3) {
                int regiao[9];
                int idx = 0;
                
                for (int i = reg_i; i < reg_i + 3; i++) {
                    for (int j = reg_j; j < reg_j + 3; j++) {
                        regiao[idx++] = matriz[i][j];
                    }
                }
                
                if (!validar_vetor(regiao)) {
                    valido = false;
                }
            }
        }

        // Impressão do resultado conforme especificado
        printf("Instancia %d\n", k);
        if (valido) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n"); // Linha em branco após cada instância
    }

    return 0;
}
