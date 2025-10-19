// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main()
{
    int a, b, hcf, tempA, tempB;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Euclidean algorithm
    while (tempB != 0)
    {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    hcf = tempA;

    printf("%d\n", hcf); // Display result

    return 0;
}
