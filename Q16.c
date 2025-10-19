// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>

int main()
{
    int a, b, c, largest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest number
    if (a > b)
    {
        if (a > c)
        {
            largest = a;
        }
        else
        {
            largest = c;
        }
    }
    else
    {
        if (b > c)
        {
            largest = b;
        }
        else
        {
            largest = c;
        }
    }

    // Display result
    printf("Largest is %d\n", largest);

    return 0;
}
