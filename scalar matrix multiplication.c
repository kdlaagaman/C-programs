#include <stdio.h>

int main() {
    int i, j;
    int rows, cols, scalar;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], difference[rows][cols];
    int scalarMultiplication[rows][cols];

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Difference of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    printf("Enter a scalar value for multiplication: ");
    scanf("%d", &scalar);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scalarMultiplication[i][j] = matrix1[i][j] * scalar;
        }
    }

    printf("Scalar multiplication of matrix 1 with %d:\n", scalar);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", scalarMultiplication[i][j]);
        }
        printf("\n");
    }

    return 0;
}
