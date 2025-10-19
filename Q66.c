// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main()
{
    int n, key;

    // Read array size
    scanf("%d", &n);
    int arr[n + 1]; // +1 for the new element

    // Read array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read the element to insert
    scanf("%d", &key);

    int i;
    // Find the correct position for insertion
    for (i = n - 1; i >= 0 && arr[i] > key; i--)
    {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }

    arr[i + 1] = key; // Insert the element
    n++;              // Increase array size

    // Print the updated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
