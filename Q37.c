// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

// Function to calculate HCF
int hcf(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b, lcmValue;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // LCM = (a * b) / HCF(a, b)
    lcmValue = (a * b) / hcf(a, b);

    printf("%d\n", lcmValue); // Display result

    return 0;
}
