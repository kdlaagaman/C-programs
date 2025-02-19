#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,n;
	while(a<500)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}