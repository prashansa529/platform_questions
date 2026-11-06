#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int current_num = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d", current_num++);
            } else {
                printf(" %d", current_num++);
            }
        }
        printf("\n");
    }
    
    return 0;
}