#include<stdio.h>

int main()
{
FILE *fp;
int rollno;
char name[30],address[30];
int age;
float phy,c,math,avg;

int i;
fp=fopen("std.txt","w");
fprintf(fp,"Name\t Address\t Roll no\t age\t Physics\t C\t Math\t Average\n");
for(i=0;i<3;i++)
{
printf("Enter details of student %d\n",i+1);

printf("Enter name: ");
scanf("%s",name);
printf("Enter address: ");
scanf("%s",address);
printf("Enter roll no: ");
scanf("%d",&rollno);
printf("Enter age: ");
scanf("%d",&age);
printf("Enter marks in Physics,C and math: ");
scanf("%f %f %f",&phy,&c,&math);

avg=(phy+c+math)/3;
fprintf(fp,"%s \t%s\t %d\t %d\t %.2f\t %.2f\t %.2f\t %.2f\n ",name,address,rollno,age,phy,c,math,avg);
}
fclose(fp);

fp=fopen("std.txt","r");
printf("Name\t Address\t Roll no\t age\t Physics\t C\t Math\t Average\n");
while(fscanf(fp,"%s %s %d %d %f %f %f %f",name,address,&rollno,&age,&phy,&c,&math,&avg)!=EOF)
{
printf("%s \t%s\t %d\t %d\t %.2f\t %.2f\t %.2f\t %.2f\n ",name,address,rollno,age,phy,c,math,avg);
}
return 0;
}