

#include <stdio.h>
#include <math.h>

int main()
{
	int i,N,x;
	float sum;
	
	printf("Enter total number of terms: ");
	scanf("%d",&N);
	
	sum=0.0f;
	
	for(i=1;i<=N;i++)
	{
		sum = sum + ( (float)(N)*(N+1) / (float)(N+2));
	}
	
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}