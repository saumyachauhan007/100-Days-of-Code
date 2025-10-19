// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (int k = 0; k < m + n - 1; k++)
    {
        if (k % 2 == 0)
        {
            // Traverse upwards
            int i = (k < m) ? k : m - 1;
            int j = k - i;
            while (i >= 0 && j < n)
            {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
        else
        {
            // Traverse downwards
            int j = (k < n) ? k : n - 1;
            int i = k - j;
            while (j >= 0 && i < m)
            {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}
