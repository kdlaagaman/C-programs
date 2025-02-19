
#include <stdio.h>

void arrayfun(int ptr[3][3] , int row, int col)
{
    int i=0,j=0;
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nArray [%d][%d] : %d",i,j,ptr[i][j]);  
			fflush(stdout);
        }
        printf("\n");
    }
}

int main()
{
  int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
  arrayfun(array,3,3);
  return 0;
}