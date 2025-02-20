#include <stdio.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct employee e;
    struct employee *p = &e;

    printf("enter name: ");
    scanf("%s", p->name);
    printf("enter id: ");
    scanf("%d", &p->id);
    printf("enter salary: ");
    scanf("%f", &p->salary);

    printf("name: %s\n", p->name);
    printf("id: %d\n", p->id);
    printf("salary: %.2f\n", p->salary);

    return 0;
}