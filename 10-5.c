#include<stdio.h>
int main()
{
FILE *fp;
char name[30];
int age,height;
fp=fopen("person.txt","w");
printf("Enter name: ");
scanf("%[^\n]",name);
printf("Enter age and height: ");
scanf("%d %d",&age,&height);
fprintf(fp,"%s %d %d",name,age,height);
fclose(fp);

fp=fopen("person.txt","r");
while(fscanf(fp,"%s %d %d",&name,&age,&height)!=EOF)
{
printf("Name: %s\nAge:%d\nHeight:%d\n",name,age,height);

}
fclose(fp);
return 0;
}