
#include <stdio.h>
int main()
{
    float arr[10];
    int i;
    float largest, smallest;
    printf("Enter 10 floating-point numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%f", &arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];

    for(i = 1; i < 10; i++)
    {
        if(arr[i] > largest) 
        {
            largest = arr[i];
        }
        if(arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }
    printf("The largest element is: %.2f\n", largest);
    printf("The smallest element is: %.2f\n", smallest);
    return 0;
}