
#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        int F1, F2;
        scanf("%d %d", &F1, &F2);
        printf("%d\n", mdc(F1, F2));
    }
    
    return 0;
}
