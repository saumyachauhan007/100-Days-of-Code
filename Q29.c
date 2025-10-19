// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main()
{
    int n;
    long long factorial = 1; // Use long long to handle large factorials

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial not defined for negative numbers\n");
    }
    else
    {
        // Calculate factorial
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("%lld\n", factorial); // Display result
    }

    return 0;
}
