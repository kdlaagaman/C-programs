#include <stdio.h>

int main() {
    int n, count = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                // Set the duplicate element to a value that won't match any other element
                arr[j] = -1; // Mark as visited
                break;
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
