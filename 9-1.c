#include<stdio.h>
struct Student {
int rollNo;
char name[50];
char address[100];
int age;
float marksPhysics;
float marksC;
float marksMath;
float averageMarks;
};

int main() 
{
struct Student students[3];
int i;
for (i = 0; i < 3; i++) {
printf("\nEnter details for Student %d\n", i + 1);
printf("Enter Roll No: ");
scanf("%d", &students[i].rollNo);
printf("Enter Name: ");
scanf("%s",students[i].name) ;
printf("Enter Address: ");
scanf("%s",students[i].address);
printf("Enter Age: ");
scanf("%d", &students[i].age);
printf("Enter Marks in Physics: ");
scanf("%f", &students[i].marksPhysics);
printf("Enter Marks in C: ");
scanf("%f", &students[i].marksC);
printf("Enter Marks in Math: ");
scanf("%f", &students[i].marksMath);
students[i].averageMarks = (students[i].marksPhysics + students[i].marksC + students[i].marksMath) / 3;
}
printf("\n\nStudent Details with Average Marks:\n");
for (i = 0; i < 3; i++) {
printf("\nStudent %d Details:\n", i + 1);
printf("Roll No: %d\n", students[i].rollNo);
printf("Name: %s\n", students[i].name);
printf("Address: %s\n", students[i].address);
printf("Age: %d\n", students[i].age);
printf("Marks in Physics: %f\n", students[i].marksPhysics);
printf("Marks in C: %f\n", students[i].marksC);
printf("Marks in Math: %f\n", students[i].marksMath);
printf("Average Marks: %f\n", students[i].averageMarks);
}
return 0;
}