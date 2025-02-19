#include <stdio.h>

void fibonacci_iterative(int n) {
    int a = 0, b = 1, next;

    if (n >= 1) {
        printf("%d ", a);  
    }
    if (n >= 2) {
        printf("%d ", b);
    }
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series without Recursion: ");
    fibonacci_iterative(n);

    return 0;
}