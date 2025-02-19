#include <stdio.h>

enum Weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

union Data {
    int intVal;
    float floatVal;
    char charVal;
};

void display_weekday(enum Weekday day) {
    switch(day) {
        case Sunday: printf("Today is Sunday.\n"); break;
        case Monday: printf("Today is Monday.\n"); break;
        case Tuesday: printf("Today is Tuesday.\n"); break;
        case Wednesday: printf("Today is Wednesday.\n"); break;
        case Thursday: printf("Today is Thursday.\n"); break;
        case Friday: printf("Today is Friday.\n"); break;
        case Saturday: printf("Today is Saturday.\n"); break;
        default: printf("Invalid day.\n"); break;
    }
}

void demonstrate_union() {
    union Data data;

    data.intVal = 10;
    printf("Union stores integer: %d\n", data.intVal);

    data.floatVal = 3.14f;
    printf("Union stores float: %.2f\n", data.floatVal);

    data.charVal = 'A';
    printf("Union stores char: %c\n", data.charVal);
}

int main() {
    enum Weekday today = Wednesday;
    display_weekday(today);

    printf("\nDemonstrating Union Usage:\n");
    demonstrate_union();

    return 0;
}