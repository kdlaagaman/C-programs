#include <stdio.h>

int main() {
    int i, j, rows = 5;
    
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }

        for (j = 1; j <= 2 * (i - 1) - 1; j++) {
            printf(" ");
        }

        for (j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}