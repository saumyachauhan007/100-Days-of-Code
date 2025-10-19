// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n); // size of array

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // input array elements
    }

    scanf("%d", &k); // number of rotations

    k = k % n; // to handle if k > n

    // Print rotated array
    for (int i = n - k; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
