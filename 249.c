#include <stdio.h>

int main()
{
	int terms;
	int i; 
	long int sum; 
	long int temp; 
	
	sum =0;
	temp =1;
	
	
	printf("Enter total number of terms: ");
	scanf("%d",&terms);
	for(i=0; i<terms; i++)
	{
		printf("%ld ", temp);
		if(i<terms-1)
			printf("+ ");
		
		sum += temp;
		temp = (temp*10)+1;		
	}
	
	printf("\nSUM of the series is: %ld\n",sum);
	
	return 0;
}