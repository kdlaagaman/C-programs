#include<stdio.h>
int main()
{
    float m1,m2,m3,total=0,p;
    printf("Enter your marks in three subjects:");
    scanf("%f%f%f",&m1,&m2,&m3);
    total = m1+m2+m3;
    p = total/3;
    if(p>=80)
    {
        printf("You have got first division with %f%",p);
    }
    else if(p>=60 || p<80)
    {
        printf("You have got second division with %f%",p);
    }
    else if(p>=40 || p<60)
    {
        printf("You have got third division with %f%",p);
    }
    else{
        printf("Oops Better Luck Next time:");
    }
    return 0;
}