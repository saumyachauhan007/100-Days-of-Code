// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Input character to count
    printf("Enter character: ");
    scanf(" %c", &ch);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
