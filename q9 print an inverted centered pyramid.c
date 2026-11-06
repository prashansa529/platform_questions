#include <stdio.h>

int main() {
    int n;
    
    // Read the input size n
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    // Iterate through rows (i) and columns (j)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Check if current position is on the boundary
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next row
        printf("\n");
    }
    
    return 0;
}