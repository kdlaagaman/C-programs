#include <stdio.h>

void leftRotate(int arr[], int n) {
    int first = arr[0]; // Store the first element

    // Shift all elements to the left by one position
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Move the first element to the end of the array
    arr[n - 1] = first;
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Left rotate the array
    leftRotate(arr, n);

    // Output the rotated array
    printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
