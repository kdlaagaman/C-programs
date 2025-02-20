#include <stdio.h>

int main() {
    int day;

    printf("Enter a number between 1 and 7 to find the corresponding day of the week:\n");
    scanf("%d", &day);

    // Using switch-case to find the day
    switch(day) {
        case 1:
            printf("Day 1 is Sunday.\n");
            break;
        case 2:
            printf("Day 2 is Monday.\n");
            break;
        case 3:
            printf("Day 3 is Tuesday.\n");
            break;
        case 4:
            printf("Day 4 is Wednesday.\n");
            break;
        case 5:
            printf("Day 5 is Thursday.\n");
            break;
        case 6:
            printf("Day 6 is Friday.\n");
            break;
        case 7:
            printf("Day 7 is Saturday.\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
