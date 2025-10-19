// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];

    // Read first matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);
    int b[r2][c2];

    // Read second matrix
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if matrices can be added
    if (r1 != r2 || c1 != c2)
    {
        printf("Matrix addition not possible\n");
        return 0;
    }

    int sum[r1][c1];

    // Add matrices
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
