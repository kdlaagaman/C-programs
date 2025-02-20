#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, circumference, volume;
    int choice;

    // Input the radius and height of the cylinder
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Menu for the user to choose the calculation
    printf("\nChoose the calculation you want to perform:\n");
    printf("1. Circumference of the cylinder base\n");
    printf("2. Volume of the cylinder\n");
    printf("3. Radius (for the given volume and height, if possible)\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    // Using switch-case to handle the user's choice
    switch(choice) {
        case 1:
            circumference = 2 * PI * radius;
            printf("Circumference of the cylinder base: %.2f\n", circumference);
            break;
        case 2:
            volume = PI * radius * radius * height;
            printf("Volume of the cylinder: %.2f\n", volume);
            break;
        case 3:
            if (height != 0) {
                radius = sqrt(volume / (PI * height));  // Calculate radius from volume and height
                printf("Radius of the cylinder: %.2f\n", radius);
            } else {
                printf("Error: Height cannot be zero when calculating radius.\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a valid option (1, 2, or 3).\n");
            break;
    }

    return 0;
}
