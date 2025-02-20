

#include <stdio.h>
#include <math.h>


long int factorial(int n)
{
    int i;
    long int fact=1;
 
    if(n==1) return fact;
 
    for(i=n;i>=1;i--)
        fact= fact * i;
 
    return fact;
}

int main()
{
	int i,N,x;
	float sum;
	
	printf("Enter total number of terms: ");
	scanf("%d",&N);
	
	sum=0.0f;
	
	for(i=1;i<=N;i++)
	{
		sum = sum + ( (float)(pow(N,2)) / (float)(factorial(N)));
	}
	
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}