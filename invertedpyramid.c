#include <stdio.h>

int main() {
    int i,j,k,n = 5;

    // Outer loop for printing all rows
    for  (i = 0; i < n; i++) {

        // First inner loop for printing leading white
        // spaces
        for (j= 0; j < 2 * i; j++)
            printf(" ");

        // Second inner loop for printing numbers
        for (k = 0; k < 2 * (n - i) - 1; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
}