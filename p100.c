#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++) {
        // Print the first part (ascending numbers)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print the spaces in the middle
        for (j = 1; j <= 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // Print the second part (descending numbers)
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
