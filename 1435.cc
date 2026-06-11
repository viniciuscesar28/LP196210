/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 11/06/2026
Objetivo    : Construir e imprimir uma matriz quadrada em que os valores aumentam em camadas concêntricas em direção ao centro
Aprendizado : <<<reforço de matriz>>>
Duvidas     :
-------------------------------------------------------------------------- */
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        vector<vector<int>> m(n, vector<int>(n, 1));

        int camada = 1;
        int inicio = 0, fim = n - 1;

        while (inicio <= fim) {
            for (int i = inicio; i <= fim; i++) {
                for (int j = inicio; j <= fim; j++) {
                    m[i][j] = camada;
                }
            }

            camada++;
            inicio++;
            fim--;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j) cout << " ";
                cout << setw(3) << m[i][j];
            }
            cout << "\n";
        }

        cout << "\n";
    }

    return 0;
}
