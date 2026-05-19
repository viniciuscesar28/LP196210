/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    : obter a distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostrando o valor com 3 casas decimais após o ponto.
Aprendizado : <<<praticar c usando a função float>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

// Função para calcular litros de combustível
float calcularLitros(int tempo, int velocidade) {
    int distancia = tempo * velocidade;
    float litros = distancia / 12.0;
    return litros;
}

int main() {
    int tempo, velocidade;
    float litros;
    
    // Lê o tempo gasto e a velocidade média
    scanf("%d %d", &tempo, &velocidade);
    
    // Calcula os litros usando a função
    litros = calcularLitros(tempo, velocidade);
    
    // Imprime com 3 casas decimais
    printf("%.3f\n", litros);
    
    return 0;
}
