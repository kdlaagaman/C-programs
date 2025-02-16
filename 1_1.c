#include<stdio.h>
int main()
{
    char name[100];
    int roll_num;
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your roll number:");
    scanf("%d",&roll_num);
    printf("Name        : %s\nRoll number :%d",name,roll_num);
    return 0;
}