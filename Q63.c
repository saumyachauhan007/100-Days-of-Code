// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main()
{
    int n1, n2, i;

    // Read size of first array
    scanf("%d", &n1);
    int arr1[n1];

    // Read elements of first array
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Read size of second array
    scanf("%d", &n2);
    int arr2[n2];

    // Read elements of second array
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Print merged array
    for (i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }
    for (i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
