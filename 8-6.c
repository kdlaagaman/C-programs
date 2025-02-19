#include <stdio.h>

int main() {
    char str[100];
    int a = 0, b = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[a] != '\0') {
        if (str[a] != ' ') {
            if (str[a] == '.') {
                str[b] = ':';
            } else {
                str[b] = str[a];
            }
            b++;
        }
        a++;
    }
    str[b] = '\0';

    printf("Modified sentence: %s\n", str);

    return 0;
}