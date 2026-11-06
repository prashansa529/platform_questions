#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int total_rows = 2 * n - 1;

    for (int i = 1; i <= total_rows; i++) {
        // k represents the effective row height from the closest peak
        int k = (i <= n) ? i : (2 * n - i);

        // Print leading spaces
        for (int j = 0; j < n - k; j++) {
            putchar(' ');
        }

        // Print stars
        for (int j = 0; j < 2 * k - 1; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}