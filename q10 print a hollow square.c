#include <stdio.h>

int main() {
    int n;
    
    // Read the input value for n
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    // Loop through each row from 1 to n
    for (int i = 1; i <= n; i++) {
        // Loop through each column from 1 to i
        for (int j = 1; j <= i; j++) {
            // Print '*' on the first column (j == 1), 
            // the diagonal (j == i), or the final row (i == n)
            if (j == 1 || j == i || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}