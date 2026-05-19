/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Vinícius Cesar Sotelo Ambires>>>
Linguagem   : C99
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 19/05/2026
Objetivo    : eia os quatro valores correspondentes aos eixos x e ye calcule a distância entre elesmostrando 4 casas decimais
Aprendizado : <<<pratica de programar em c>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double distancia;
    
    // Lê as coordenadas do primeiro ponto
    scanf("%lf %lf", &x1, &y1);
    
    // Lê as coordenadas do segundo ponto
    scanf("%lf %lf", &x2, &y2);
    
    // Calcula a distância usando a fórmula
    // distância = √((x2-x1)² + (y2-y1)²)
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    // Imprime com 4 casas decimais
    printf("%.4lf\n", distancia);
    
    return 0;
}
