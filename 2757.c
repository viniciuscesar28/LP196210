
#include <stdio.h>

int main() {
    int A, B, C;
    
    // Leitura dos três números inteiros
    scanf("%d %d %d", &A, &B, &C);
    
    // Linha 1: Formato normal
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    
    // Linha 2: Justificado à direita com 10 dígitos
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    
    // Linha 3: Preenchido com zeros (10 dígitos)
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    
    // Linha 4: Justificado à esquerda com 10 dígitos
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
    
    return 0;
}
