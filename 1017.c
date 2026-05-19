
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
