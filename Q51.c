// Q51: Write a program to print the following pattern:
/*
   5
  45
 345
2345
12345
*/
/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main()
{
     int i, j, n, k;
    printf("enter the no of rows: ");
    scanf("%d" ,&n);

    // Loop for each row
    for (i = n; i >= 1; i--)
    {
        // Print leading spaces
        for (j = 1; j < i; j++)

        {
            printf(" ");
        }

        // Print numbers from i to 5
        for (k = i; k <= n; k++)
        {
            printf("%d", k);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
