// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0}; // Array to store frequency of digits
    int maxDigit = 0, maxCount = 0;

    // Read the number
    scanf("%lld", &num);

    // Count frequency of each digit
    while (num != 0)
    {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
