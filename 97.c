#include <stdio.h>

int main() {
    int i, j, rows = 5; // Number of rows for the pattern
    
    for (i = 1; i <= rows; i++) {
        // Print the first part (alternating 0's and 1's)
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("0");
            } else {
                printf("1");
            }
        }
        
        // Print spaces in the middle
        for (j = 1; j <= 2 * (rows - i) - 1; j++) {
            printf(" ");
        }
        
        // Print the second part (alternating 0's and 1's)
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("0");
            } else {
                printf("1");
            }
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}