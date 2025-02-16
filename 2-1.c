#include<stdio.h>
int main()
{
    char name[20];
    int roll;
    float m1,m2,m3,m4,m5,total,percent;
    printf("enter name and roll no:\n");
    scanf("%s%d",name,&roll);
    printf("enter marks in five subjects:\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    percent = (total/5);
    printf("Name : %s\nRoll no: %d\nPercentage=%f%",name,roll,percent);
    return 0;
}