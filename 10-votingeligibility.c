#include<stdio.h>
int main()
{
    float age;
    printf("Enter your age:");
    scanf("%f",&age);
    if(age>=18)
    {
        printf("You are eligilbe for voting.");
    }
    else{
        printf("You are not eligible for voting.");
    }
    return 0;
}