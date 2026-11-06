#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int mid = (n + 1) / 2;
    
    for (int i = 1; i <= n; i++) {
        // Determine the number of stars on each wing for the current row
        int stars = (i <= mid) ? i : (n - i + 1);
        
        // Calculate the central gap spaces
        int spaces = 2 * (n - 2 * stars + 1);
        if (spaces < 0) spaces = 2; // Handle alignment for middle/overlapping rows
        
        // Print left wing stars
        for (int j = 0; j < stars; j++) {
            putchar('*');
        }
        
        // Print central spaces
        for (int j = 0; j < spaces; j++) {
            putchar(' ');
        }
        
        // Print right wing stars
        for (int j = 0; j < stars; j++) {
            putchar('*');
        }
        
        putchar('\n');
    }
    
    return 0;
}