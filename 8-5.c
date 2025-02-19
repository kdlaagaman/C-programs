#include <stdio.h>

int main() {
    char str[100];
    int a = 0, b = 0, c = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[a] != '\0') {
        if (str[a] != ' ' && str[a] != '\n') {
            b++;
        }
        if (str[a] == ' ' || str[a] == '\n') {
            if (a > 0 && str[a-1] != ' ' && str[a-1] != '\n') {
                c++;
            }
        }
        a++;
    }

    if (str[a-1] != ' ' && str[a-1] != '\n') {
        c++;
    }

    printf("Number of characters: %d\n", b);
    printf("Number of words: %d\n", c);

    return 0;
}