/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 11/06/2026
Objetivo    : encontrar o menor valor de salto m que faz a região 13 ser a última a ser desligada no processo de eliminação circular das regiões
Aprendizado : <<<uso do c++>>>
Duvidas     : 
-------------------------------------------------------------------------- */
#include <iostream>
#include <vector>
using namespace std;

bool works(int N, int m) {
    vector<int> v;

    // Região 1 é desligada primeiro
    for (int i = 2; i <= N; i++) {
        v.push_back(i);
    }

    int pos = 0;

    while (v.size() > 1) {
        pos = (pos + m - 1) % v.size();

        if (v[pos] == 13) {
            return false; // Região 13 foi desligada antes da última
        }

        v.erase(v.begin() + pos);
    }

    return v[0] == 13; // A última região restante deve ser a 13
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N && N) {
        int m = 1;
        while (!works(N, m)) {
            m++;
        }
        cout << m << '\n';
    }

    return 0;
}
