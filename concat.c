#include<stdio.h>
int main() {
            char st1[50];
            char st2[50];
            printf("Enter String 1 and String 2");
            scanf("%s %s",st1,st2);
            strcat(st1, st2);
            printf("%s\n", st1);


            return 0;
}