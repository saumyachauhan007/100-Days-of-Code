// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    int first = 1;

    while (scanf("%s", word) == 1)
    {
        if (!first)
            printf(" ");
        first = 0;

        int i = strlen(word) - 1;
        while (i >= 0)
        {
            printf("%c", word[i--]);
        }
    }

    printf("\n");
    return 0;
}
