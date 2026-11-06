#include <stdio.h>

int main() {
    int n;
    
    // Read the input size n
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    // Outer loop for rows (1 to n)
    for (int i = 1; i <= n; i++) {
        // Inner loop for columns (1 to n)
        for (int j = 1; j <= n; j++) {
            // Print product followed by a space
            if (j == n) {
                printf("%d", i * j); // No trailing space after the last number in a row
            } else {
                printf("%d ", i * j);
            }
        }
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}