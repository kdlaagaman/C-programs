#include <stdio.h>

void printEvenNumbers(int current, int n) {
    if (current > n) {
        return;
    }
    if (current % 2 == 0) {
        printf("%d ", current);
    }
    printEvenNumbers(current + 1, n);
}

void printOddNumbers(int current, int n) {
    if (current > n) {
        return;
    }
    if (current % 2 != 0) {
        printf("%d ", current);
    }
    printOddNumbers(current + 1, n);
}

int main() {
    int n, choice;
    printf("Enter the range (1 to n): ");
    scanf("%d", &n);

    printf("Choose:\n1. Even numbers\n2. Odd numbers\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Even numbers between 1 and %d are: ", n);
        printEvenNumbers(1, n);
    } else if (choice == 2) {
        printf("Odd numbers between 1 and %d are: ", n);
        printOddNumbers(1, n);
    } else {
        printf("Invalid choice.\n");
    }

    printf("\n");
    return 0;
}
