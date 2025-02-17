#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];
    int colSum[cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }

    for (j = 0; j < cols; j++) {
        colSum[j] = 0;
    }

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    
    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    
    printf("\nSum of each column:\n");
    for (j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}