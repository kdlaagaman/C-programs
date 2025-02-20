#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows for the pattern

    for (i = 1; i <= rows; i++) {
        // Print the first part (ascending letters)
        for (j = 1; j <= rows - i + 1; j++) {
            printf("%c", 'A' + j - 1);
        }

        // Print spaces in the middle
        for (j = 1; j <= 2 * (i - 1) - 1; j++) {
            printf(" ");
        }

        // Print the second part (descending letters)
        for (j = rows - i + 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
