#include <stdio.h>

int main() {
    int a;
    printf("enter the value of n: ");
    scanf("%d", &a);

    int b = 0;
    int c = 1;
    while (c <= a) {
        int d = 0;
        int e = 1;
        while (e <= c) {
            d =d+ e;
            e++;
        }
        b =b+ d;
        c++;
    }
// Given a series: 1+(1+2) +(1+2+3) +(1+2+3+4) +…. +(1+2+3+…+n), 
    printf("sum of the series: %d", b);

    return 0;
}