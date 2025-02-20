#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = rows; i >= 1; i--) {
        // Print numbers and letters
        for (j = 1; j <= i; j++) {
            // Print number first
            printf("%d", j);
            // Print corresponding letter next
            printf("%c", 'A' + j - 1);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
