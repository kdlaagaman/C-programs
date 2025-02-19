#include <stdio.h>
int main()
{
    int arr[5], i, j, temp;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 4; i++) 
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Elements in ascending order:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = 0; i < 4; i++) 
    {
        for(j = i + 1; j < 5; j++) 
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Elements in descending order:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}