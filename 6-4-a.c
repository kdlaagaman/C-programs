#include <stdio.h>

void fibonacci_recursive(int n, int a, int b) {
    if (n == 0) {
        return;
    }
    printf("%d ", a);
    fibonacci_recursive(n - 1, b, a + b);
}

int main() {
    int n;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    fibonacci_recursive(n, 0, 1);

    return 0;
}