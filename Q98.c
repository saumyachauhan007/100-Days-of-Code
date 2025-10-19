// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char first[30], middle[30], last[30];
    printf("enter the name: ");
        // Read three parts of the name using scanf
        scanf("%s %s %s", first, middle, last);

    // Print initials and full surname
    printf("%c.%c. %s\n", first[0], middle[0], last);

    return 0;
}