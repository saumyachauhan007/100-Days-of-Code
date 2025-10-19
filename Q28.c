// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main()
{
    int n;
    long long product = 1; // Use long long to handle larger products

    // Input n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2)
    {
        product *= i;
    }

    printf("%lld\n", product); // Display result

    return 0;
}
