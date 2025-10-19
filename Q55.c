// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main()
{
    int n, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++)
    {                // Start from 2, as 1 is not prime
        isPrime = 1; // Assume i is prime

        // Check if i is divisible by any number from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
