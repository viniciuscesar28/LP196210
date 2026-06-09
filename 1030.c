/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : com n pessoas em um círculo e um salto k determinar a posição da ultoma pessoa após eliminações consecutivas
Aprendizado : <<<uso do c++ e o comando union>>>
Duvidas     : 
-------------------------------------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k) {
    if (n == 1) return 1;
    int f = 0;
    for (int i = 2; i <= n; ++i) {
        f = (f + k) % i;
    }
    return f + 1;
}

int main() {
    int NC;
    cin >> NC;
    for (int cas = 1; cas <= NC; ++cas) {
        int n, k;
        cin >> n >> k;
        int ans = josephus(n, k);
        cout << "Case " << cas << ": " << ans << endl;
    }
    return 0;
}
