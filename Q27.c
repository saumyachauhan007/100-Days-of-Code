// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Input n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1);
    }

    printf("%d\n", sum); // Display result

    return 0;
}
