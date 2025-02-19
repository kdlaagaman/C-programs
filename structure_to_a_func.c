
#include <stdio.h>

struct exam
{
    	int marks;
    	char name[20];
};

struct exam obj;

void structfun(struct exam obj1);

void structfun(struct exam obj1)
{
    printf("\nThe name of the student is : %s",obj1.name);
    printf("\nThe marks of the student is : %d",obj1.marks);
}

int main()
{
    obj.marks = 50;
    strcpy(obj.name , "Arjun kapoor");
	
    structfun(obj);
	
    return 0;
}