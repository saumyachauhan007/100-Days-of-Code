// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++)
    {
        printf("enter the element of string: ");
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}
