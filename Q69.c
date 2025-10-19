// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n); // size of array
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // input array elements
    }

    int first, second;
    first = second = -2147483648; // minimum possible int value

    for (i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }

    if (second == -2147483648)
    {
        printf("No second largest element\n");
    }
    else
    {
        printf("%d\n", second);
    }

    return 0;
}
