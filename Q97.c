// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter name: ");
    gets(name);

    printf("%c.", name[0]); // print first letter

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            printf("%c.", name[i + 1]); // print next letter after space
        }
    }

    return 0;
}
