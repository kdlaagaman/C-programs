#include<stdio.h>
int main()
{ int n1,n2,sum=0,i;
printf("Enter Two Numbers");
scanf("%d %d",&n1,&n2);
for(i=n1;i<=n2;i++)
{if (i%2==0)
{sum=sum+i;

}

}
printf("The sum of Enevn Numbers Between %d and %d is %d",n1,n2,sum);
getch();
return 0;
}
