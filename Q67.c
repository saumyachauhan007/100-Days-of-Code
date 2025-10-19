// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main()
{
    int n, i, pos, elem;

    // Read the size of the array
    scanf("%d", &n);
    int arr[n + 1]; // +1 to accommodate the new element

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read position and element to insert
    scanf("%d %d", &pos, &elem);

    // Shift elements to the right from the position
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = elem;

    // Print the updated array
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
