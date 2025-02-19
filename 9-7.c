#include <stdio.h>

struct Student {
    char roll_no[10];
    char name[50];
    char address[100];
    int age;
    float avg_marks;
};

void get_student_details(struct Student students[]) {
    for (int i = 0; i < 12; i++) {
        printf("\nEnter details for Student %d:\n", i+1);
        printf("Enter Roll No: ");
        scanf("%s", students[i].roll_no);
        printf("Enter Name: ");
        scanf(" %[^\n]%*c", students[i].name);
        printf("Enter Address: ");
        scanf(" %[^\n]%*c", students[i].address);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Average Marks: ");
        scanf("%f", &students[i].avg_marks);
    }
}

void display_student_details(struct Student students[]) {
    printf("\nStudent Details:\n");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < 12; i++) {
        printf("Roll No: %s\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].avg_marks);
        printf("------------------------------------------------------------\n");
    }
}

int main() {
    struct Student students[12];
    get_student_details(students);
    display_student_details(students);
    return 0;
}