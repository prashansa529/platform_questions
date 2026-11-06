#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int current_num = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d%s", current_num++, (j == i) ? "" : " ");
        }
        printf("\n");
    }
    
    return 0;
}