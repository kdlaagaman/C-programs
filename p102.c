#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch = 'A'; // Start with 'A'

    for (i = 1; i <= rows; i++) {
        // Print characters in each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to the next character
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
