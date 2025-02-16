#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,x,ci;
    printf("enter principal, time and rate of interest:");
    scanf("%f%f%f",&p,&t,&r);
    x = pow((1+r/100),t);
    ci = p*(x-1);
    printf("the compound interest is %f",ci);
    return 0;
}