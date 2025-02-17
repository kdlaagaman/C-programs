#include<stdio.h>
#include<string.h>
int main() {
int i;

FILE *file = fopen("stringc.txt", "w");
char strings[500][600] = {
"This is a string of fifty words.",
"I am aagaman kandel.",
"I am AAGAMAN Kandel",
"Things to be randomly written",
" end.",
};
for ( i = 0; i < 5; i++) {
fputs(strings[i], file);
fputs("\n", file);
}
fclose(file);
file = fopen("stringc.txt", "r");
char buffer[41];
while (fgets(buffer, sizeof(buffer), file) != NULL) {
printf("%s", buffer);
}
fclose(file);

return 0;
}