#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    char ch;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    getchar();

    printf("Enter your choice (+, -, *, /): ");
    scanf("%c", &ch);

    switch(ch) {
        case '+':
            printf("The sum is %.2f\n", a + b);
            break;
        case '-':
            printf("The difference is %.2f\n", a - b);
            break;
        case '*':
            printf("The product is %.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("The division is %.2f\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}