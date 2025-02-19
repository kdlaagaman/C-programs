

#include <stdio.h>

void arrayfun(int*ptr , int count)
{
    int i=0;
    
    for(i=0;i<count;i++)
    {
        printf("\nArray [%d] : %d",i,ptr[i]);  fflush(stdout);
    }
    
}

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9};
	
	arrayfun(array,9);
	return 0;
}