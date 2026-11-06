#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d", i);
            } else {
                printf(" %d", i);
            }
        }
        printf("\n");
    }
    
    return 0;
}