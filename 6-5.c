//Write a program that illustrates use of local, global and static variables

#include <stdio.h>

int global_var = 10; // Global variable

void function_with_local_variable() {
    int local_var = 5; // Local variable
    printf("Inside function_with_local_variable:\n");
    printf("Local variable = %d\n", local_var); // Local variable can be accessed here
}

void function_with_static_variable() {
    static int static_var = 0; // Static variable
    static_var++;
    printf("Inside function_with_static_variable:\n");
    printf("Static variable = %d\n", static_var); // Static variable retains its value between function calls
}

int main() {
    printf("Inside main function:\n");
    printf("Global variable = %d\n", global_var); // Global variable can be accessed anywhere in the program

    function_with_local_variable(); // Local variable is used here
    function_with_local_variable(); // Local variable is used again (each call creates a new instance of the variable)

    function_with_static_variable(); // Static variable maintains its value across multiple calls
    function_with_static_variable(); // Static variable retains its value between calls

    return 0;
}