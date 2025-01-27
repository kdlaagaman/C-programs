#include<stdio.h>
int main()
{
    float p,t,r,i;
    printf("enter principal,rate and time respectively");
    scanf("%f%f%f",&p,&t,&r);
    i=(p*t*r)/100;
    printf("the simple interest for the entered principal,rate and time is %f",i);//this is to calculate si
    return 0;
}