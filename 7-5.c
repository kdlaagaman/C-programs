#include <stdio.h>

int main() {
    int matrix1[3][2], matrix2[3][2], sum[3][2];
    int i, j;

    printf("Enter elements of the first 3x2 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second 3x2 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum of the matrices is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}