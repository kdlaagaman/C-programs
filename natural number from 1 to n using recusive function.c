#include <stdio.h>

void printNaturalNumbers(int current, int n) {
    if (current > n) {
        return;
    }
    printf("%d ", current);
    printNaturalNumbers(current + 1, n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Natural numbers between 1 and %d are: ", n);
    printNaturalNumbers(1, n);
    printf("\n");

    return 0;
}
