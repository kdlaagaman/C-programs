#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3],k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter in position [%d][%d]",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	printf("The mat given is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transposed matrix is:\n");
	for(i=0; i<3; i++) 
	{
    	for(j=0; j<3; j++) 
		{
            b[j][i] = a[i][j];
	
		}
	}
	printf("Transposed matrix is:\n");
	for(i=0; i<3; i++) 
	{
        for(j=0; j<3; j++) 
		{
            printf("%d\t",b[i][j]);
	
		}
		printf("\n");
	}
	
	
	return 0;
