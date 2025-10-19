// Q47: Write a program to print the following pattern:
/*
 *
 **
 ***
 ****
 *****
 */
/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter the no of rows: ");
    scanf("%d" ,&n);
  // number of rows

    for (i = 1; i <= n; i++)
    { // loop for rows
        for (j = 1; j <= i; j++)
        { // loop for columns
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
