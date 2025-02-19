#include <stdio.h>
int main()
{
    char str[100];
    int start, end, length = 0, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') 
    {
        length++;
    }
    start = 0;
    end = length - 1;
    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    } else 
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}