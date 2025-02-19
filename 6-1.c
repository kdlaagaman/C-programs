#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);
    difference = subtract(num1, num2);
    product = multiply(num1, num2);
    quotient = divide(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}