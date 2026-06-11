/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1083
Data        : 11/06/2026
Objetivo    : Verificar se cada matriz 9×9 fornecida é uma solução válida de Sudoku obedecendo às regras das linhas, colunas e subgrades 3×3
Aprendizado : <<<uso do c++ e matrizes>>>
Duvidas     : 
-------------------------------------------------------------------------- */
#include <iostream>
#include <vector>
using namespace std;

bool valido(vector<vector<int>>& sudoku) {
    // Verifica linhas
    for (int i = 0; i < 9; i++) {
        vector<bool> visto(10, false);
        for (int j = 0; j < 9; j++) {
            int x = sudoku[i][j];
            if (x < 1 || x > 9 || visto[x]) return false;
            visto[x] = true;
        }
    }

    // Verifica colunas
    for (int j = 0; j < 9; j++) {
        vector<bool> visto(10, false);
        for (int i = 0; i < 9; i++) {
            int x = sudoku[i][j];
            if (visto[x]) return false;
            visto[x] = true;
        }
    }

    // Verifica subgrades 3x3
    for (int li = 0; li < 9; li += 3) {
        for (int co = 0; co < 9; co += 3) {
            vector<bool> visto(10, false);

            for (int i = li; i < li + 3; i++) {
                for (int j = co; j < co + 3; j++) {
                    int x = sudoku[i][j];
                    if (visto[x]) return false;
                    visto[x] = true;
                }
            }
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    for (int instancia = 1; instancia <= n; instancia++) {
        vector<vector<int>> sudoku(9, vector<int>(9));

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> sudoku[i][j];
            }
        }

        cout << "Instancia " << instancia << "\n";
        cout << (valido(sudoku) ? "SIM" : "NAO") << "\n\n";
    }

    return 0;
}
