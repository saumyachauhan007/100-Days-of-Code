// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main()
{
    int n, revBinary = 0, place = 1;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    // Build the binary in reverse
    while (n > 0)
    {
        revBinary += (n % 2) * place;
        n /= 2;
        place *= 10; // Shift left in decimal form
    }

    // Print the result
    printf("%d\n", revBinary);

    return 0;
}
