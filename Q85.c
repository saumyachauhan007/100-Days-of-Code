// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    scanf("%s", str);

    len = strlen(str);

    // Print in reverse order
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
