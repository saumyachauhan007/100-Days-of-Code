// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main()
{
    int num, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num != 0)
    {
        sum += num % 10; // Extract last digit
        num /= 10;       // Remove last digit
    }

    printf("%d\n", sum); // Display result

    return 0;
}
