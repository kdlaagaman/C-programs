#include <stdio.h>

int factorial(int a) {
    int b = 1;
    int c = 1;
    while (c <= a) {
        b *= c;
        c++;
    }
    return b;
}

int main() {
    int a;
    printf("enter the value of n: ");
    scanf("%d", &a);

    float b = 0;
    int c = 1;
    while (c <= a) {
        b =b+ (float)(c * c) / factorial(c);
        c++;
    }

    printf("sum of the series: %f\n", b);
// the sum of series 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4! + ... n^2/n!
    return 0;
}