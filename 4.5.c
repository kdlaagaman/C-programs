#include <stdio.h>

int main() {
    int num;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num % 5 == 0) {
        printf("%d is a multiple of 5\n", num);
    } else {
        printf("%d is not a multiple of 5\n", num);
    }

    
    if (num % 7 == 0 && num % 11 != 0) {
        printf("%d is divisible by 7 but not by 11\n", num);
    } else {
        printf("%d is either not divisible by 7 or it is divisible by 11\n", num);
    }

    return 0;
}