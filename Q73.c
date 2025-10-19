// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n); // Read rows and columns

    int matrix[m][n], rowSum[m];

    // Input matrix elements
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < m; i++)
    {
        rowSum[i] = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < m; i++)
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
