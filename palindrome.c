#include <stdio.h>

int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }
    return reverseNumber(num / 10, reversed * 10 + num % 10);
}

int isPalindrome(int num) {
    int reversed = reverseNumber(num, 0);
    return (num == reversed);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}