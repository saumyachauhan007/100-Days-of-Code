// Q49: Write a program to print the following pattern:
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
    int i, j;
    int n = 5; // number of rows

    for (i = n; i >= 1; i--)
    { // starting number for each row
        for (j = i; j <= n; j++)
        { // printing numbers from i to n
            printf("%d", j);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
