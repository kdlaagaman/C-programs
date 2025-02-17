#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0, temp, remainder, digits = 0;
    temp = num;
    
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    
    return (sum == num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}