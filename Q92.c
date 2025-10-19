// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str); // Read string without spaces

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        { // check lowercase letters
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                { // found repeat
                    printf("%c\n", str[i]);
                    return 0;
                }
            }
        }
    }

    printf("No repeating lowercase letter\n");
    return 0;
}
