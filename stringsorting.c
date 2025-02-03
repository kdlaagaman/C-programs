#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
int i, j;
char **s, **temp;

s = (char**) calloc(5, sizeof(char*));
for(i = 0; i < 5; i++) {
    s[i] = calloc(20, sizeof(char));
}


temp = calloc(20, sizeof(char));


for(i = 0; i < 5; i++) {
    scanf("%s", s[i]);
}


for(i = 0; i < 4; i++) {
    for(j = i + 1; j < 5; j++) {
        if (strcmp(s[i], s[j]) > 0) {
            strcpy(temp, s[i]);
            strcpy(s[i], s[j]);
            strcpy(s[j], temp);
        }
    }
}


printf("Sorted String\n");
for(i = 0; i < 5; i++) {
    printf("%s\n", s[i]);
}


for(i = 0; i < 5; i++) {
    free(s[i]);
}
free(s);
free(temp);

return 0;
}

