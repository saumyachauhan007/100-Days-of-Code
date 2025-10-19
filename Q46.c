// Q46: Write a program to print the following pattern:
/*
 *****
 *****
 *****
 *****
 *****
 */

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main()
{
    int i, j;
    int n = 5; // size of the square

    for (i = 0; i < n; i++)
    { // loop for rows
        for (j = 0; j < n; j++)
        { // loop for columns
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
