#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter number of which you want factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}