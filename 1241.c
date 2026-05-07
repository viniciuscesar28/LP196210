

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        char A[1001], B[1001];
        scanf("%s %s", A, B);
        
        int lenA = strlen(A);
        int lenB = strlen(B);
        
        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            // Comparar os últimos lenB caracteres de A com B
            int encaixa = 1;
            for (int i = 0; i < lenB; i++) {
                if (A[lenA - lenB + i] != B[i]) {
                    encaixa = 0;
                    break;
                }
            }
            
            if (encaixa) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }
    
    return 0;
}
