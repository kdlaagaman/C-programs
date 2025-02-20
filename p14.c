#include<stdio.h>
#include<math.h>
int main()
{
    float x,n,y;
    printf("Enter base as x and power as n:");
    scanf("%f%f",&x,&n);
    y = pow(x,n);
    printf("The result is %2f",y);
    return 0;
}