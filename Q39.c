// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main()
{
    int num, digit, product = 1, hasOdd = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit
    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        { // check odd digit
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    printf("%d\n", product); // If no odd digit was found, product should remain 1

    return 0;
}
