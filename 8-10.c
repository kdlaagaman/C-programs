#include <stdio.h>
#include <string.h>

int main() {
    char *words[5];
    char str[5][100];
    int i, j;
    char *temp;

    printf("Enter 5 words:\n");
    for (i = 0; i < 5; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
        words[i] = str[i];
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    printf("Sorted words:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}