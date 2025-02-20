#include<stdio.h>
int main()
{
	int i,j,a[3][3],e=0,o=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter in position [%d][%d]",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			e++;
			else
			o++;
		}
		
	}
	printf(" count of odd: %d\n count of even: %d",o,e);
	return 0;
}
