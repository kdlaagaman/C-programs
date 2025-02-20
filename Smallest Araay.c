#include<stdio.h>
int main()
{
	int i,avg,a[5],b[5],eyh;
	for(i=0;i<5;i++)
	{
		printf("Enter in position [%d]",i);
		scanf("%d", &a[i]);
	}
	eyh= a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<eyh)
		eyh=a[i];}
	printf("Smallest no is: %d",eyh);
	return 0;
}
