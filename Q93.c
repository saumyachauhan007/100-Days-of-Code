// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], t;
    int i, j;

    scanf("%s", s1);
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2))
    {
        printf("Not anagrams\n");
        return 0;
    }

    // Sort first string
    for (i = 0; i < strlen(s1) - 1; i++)
    {
        for (j = i + 1; j < strlen(s1); j++)
        {
            if (s1[i] > s1[j])
            {
                t = s1[i];
                s1[i] = s1[j];
                s1[j] = t;
            }
        }
    }

    // Sort second string
    for (i = 0; i < strlen(s2) - 1; i++)
    {
        for (j = i + 1; j < strlen(s2); j++)
        {
            if (s2[i] > s2[j])
            {
                t = s2[i];
                s2[i] = s2[j];
                s2[j] = t;
            }
        }
    }

    if (strcmp(s1, s2) == 0)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
