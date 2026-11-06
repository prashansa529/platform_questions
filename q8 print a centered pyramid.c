#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            putchar(' ');
        }
        
        // Print asterisks
        for (int j = 0; j < 2 * i - 1; j++) {
            putchar('*');
        }
        
        putchar('\n');
    }
    
    return 0;
}