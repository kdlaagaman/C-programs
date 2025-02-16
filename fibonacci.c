#include<stdio.h>
int main()
{
    int f1=0,f2=1,i,n,f3;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        printf("%d\t", f1);
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return 0;
}