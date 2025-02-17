#include<stdio.h>
int main()
{
FILE *fptr;
fptr = fopen("filec.txt", "w");
char c[100];
printf("Enter any characters: ");
fgets(c, sizeof(c), stdin);

fprintf(fptr, "%s", c);

fclose(fptr);

return 0;
}