#include <stdio.h>
int main()
{
    int a,b,c,great,small;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        great=a;
        if(b>c)
        {
            small=c;
        }
        else 
        {
            small=b;
        }
    }
    else if(b>a && b>c)
    {
        great=b;
        if(a>c)
        {
            small=c;
        }
        else 
        {
            small=a;
        }
    }
    else if(c>a && c>b)
    {
        great =c;
        if(a>b)
        {
            small=b;
        }
        else 
        {
            small=b;
        }
    }
    printf("The greatest number is %d and smallest number is %d\n",great,small);
    if(great%2==0)
    {
        printf("The greatest number is even\n");
    }
    else{
    printf("The greatest number is odd\n");}
    if(small%2==0)
    {
        printf("The smallest number is even\n");
    }
    else
    printf("The smallest number is odd\n");

}