#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= i - 1; j++) {
            printf(" ");
        }

        // Print ascending numbers from 1 to (rows - i + 1)
        for (j = 1; j <= rows - i + 1; j++) {
            printf("%d", j);
        }

        // Print descending numbers
        for (j = rows - i; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
