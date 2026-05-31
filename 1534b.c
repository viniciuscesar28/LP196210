#include <stdio.h>

int main(void) {
    int N;
    
    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int dp = (i == j);         
              // 1 se diagonal principal, 0 caso contrário
                int ds = (i + j == N - 1); 
              // 1 se diagonal secundária, 0 caso contrário
                
                // Prioridade: dp(1) > ds(2) > resto(3)
                int val = dp * 1 + (1 - dp) * ds * 2 + (1 - dp) * (1 - ds) * 3;
                printf("%d", val);
            }
            printf("\n");
        }
    }
    
    return 0;
}
