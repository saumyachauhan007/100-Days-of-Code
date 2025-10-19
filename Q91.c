// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

    for (i = 0; str[i] != '\0'; i++)
    {
        // Check if the character is NOT a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            result[j++] = str[i]; // Add non-vowel to result
        }
    }

    result[j] = '\0'; // Null-terminate the string
    printf("String without vowels: %s\n", result);

    return 0;
}
