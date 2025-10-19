// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, first, last, digits, power, middle, swapped;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // If number has only one digit, it stays the same
    if (num < 10)
    {
        printf("%d\n", num);
        return 0;
    }

    last = num % 10;              // last digit
    digits = (int)log10(num);     // total digits - 1
    power = (int)pow(10, digits); // 10^(digits)

    first = num / power;  // first digit
    middle = num % power; // remove first digit
    middle = middle / 10; // remove last digit

    // Construct swapped number
    swapped = last * power + middle * 10 + first;

    printf("%d\n", swapped);

    return 0;
}
