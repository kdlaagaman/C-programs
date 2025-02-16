#include<stdio.h>
int main()
{
    char name[20], address[30];
    int age, weight, height;
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter address: ");
    fgets(address, sizeof(address), stdin);
    printf("Enter age, weight, and height: ");
    scanf("%d %d %d", &age, &weight, &height);
    printf("Name: %s", name);
    printf("Address: %s", address);
    printf("Age: %d\n", age);
    printf("Weight: %d\n", weight);
    printf("Height: %d\n", height);
    return 0;
}