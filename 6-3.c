#include <stdio.h>
long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
long long combination(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}
long long permutation(int n, int r) {
    return fact(n) / fact(n - r);
}

int main() {
    int n, r;

    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Error: n must be greater than or equal to r.\n");
    } else {
        printf("Factorial of %d is: %lld\n", n, fact(n));
        printf("Combination (nCr) of %d and %d is: %lld\n", n, r, combination(n, r));
        printf("Permutation (nPr) of %d and %d is: %lld\n", n, r, permutation(n, r));
    }

    return 0;
}