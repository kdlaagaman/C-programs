#include <stdio.h>

int a = 10; 

void f() {
    printf("value of global variable a %d", a);
    a = 20;
    printf("modified value of global variable a %d", a);
}

int main() {
    printf("initial value of global variable a%d", a);
    f();
    printf("value of global variable a after function call %d", a);

    return 0;
}