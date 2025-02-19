#include<stdio.h>
struct Company {
char name[50];
char address[100];
char phone[15];
int noOfEmployee;
};
int main() 
{
struct Company c;
printf("Enter company name: ");
scanf("%s",&c.name);
printf("Enter company address: ");
scanf("%s",&c.address);
printf("Enter company phone number: ");
scanf("%s",&c.phone);
printf("Enter number of employees: ");
scanf("%d", &c.noOfEmployee);
printf("\nCompany Details:\n");
printf("Name: %s\n", c.name);
printf("Address: %s\n", c.address);
printf("Phone: %s\n", c.phone);
printf("Number of Employees: %d\n", c.noOfEmployee);
return 0;
}