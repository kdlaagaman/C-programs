#include <stdio.h>
int main() {
    int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16}; 
    int sum = 0;
    float average;
    int i;
    for(i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    average = sum / 8.0; 
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);
    return 0;
}