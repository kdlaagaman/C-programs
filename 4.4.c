#include <stdio.h>

int main() {
    int num, rem,rev= 0;

   
    printf("Enter an number: ");
    scanf("%d", &num);

    if(num>10){
    while (num != 0) {
        rem=num%10;
        rev = rev * 10 + rem; 
        num /= 10; 
    }
    printf("The number in reverse order is: %d\n", rev);
    }
    else
    {
        printf("Enter number greater than 10");
    }

    
    

    return 0;
}