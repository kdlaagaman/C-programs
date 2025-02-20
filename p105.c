#include <stdio.h>

int main() {
    int i, j, rows = 5;
    
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print the descending part (letters before 'A')
        for (j = i; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        // Print the ascending part (letters after 'A')
        for (j = 2; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
