
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
