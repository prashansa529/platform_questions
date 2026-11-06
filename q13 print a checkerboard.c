#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 0; i < n; i++) {
        // Determine the alternating characters for the current row
        char start = (i % 2 == 0) ? 'X' : 'O';
        char alternate = (start == 'X') ? 'O' : 'X';
        
        for (int j = 0; j < n; j++) {
            putchar((j % 2 == 0) ? start : alternate);
        }
        putchar('\n');
    }
    
    return 0;
}