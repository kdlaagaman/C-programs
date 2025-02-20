#include <stdio.h>

int main() {
    int i, j, rows = 5; // Number of rows for the pattern

    // Outer loop for the rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to print characters from 'A' up to the ith letter
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
