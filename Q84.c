// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    // Input string
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        // If character is lowercase, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // ASCII difference between 'a' and 'A' is 32
        }
    }

    printf("%s\n", str);

    return 0;
}
