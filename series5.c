#include <stdio.h>

int factorial(int a) {
    int b = 1;
    int c = 1;
    while (c <= a) {
        b =b* c;
        c++;
    }
    return b;
}

int main() {
    float  a, b;
    printf("enter the value of x: ");
    scanf("%f", &a);
    printf("enter the value of n: ");
    scanf("%f", &b);

    float c = 0;
    int d = 0;
    while (d <= b) {
        if (d % 2 == 0) {
            c =c+ a / factorial(d);
        }
        d=d+ 2;
    }

    printf("sum of the series: %f", c);
// the sum of series x + x/2! + x/4!+ ... + x/n!,
    return 0;
}