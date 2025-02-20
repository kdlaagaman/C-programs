#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Use switch-case to find the maximum
    switch (num1 > num2) {
        case 1:
            printf("The maximum number is: %d\n", num1);
            break;
        case 0:
            printf("The maximum number is: %d\n", num2);
            break;
    }

    return 0;
}
