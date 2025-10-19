// Q50: Write a program to print the following pattern:
/*
*****
****
***
**
*
*/
/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main()
{
    int i, j, n = 5; // number of rows

    for (i = 0; i < n; i++)
    { // loop for rows
        // print leading spaces
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        // print stars
        for (j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
