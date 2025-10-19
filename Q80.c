// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main()
{
    int m1, n1, m2, n2;
    scanf("%d %d", &m1, &n1);

    int A[m1][n1];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &m2, &n2);

    int B[m2][n2];
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    if (n1 != m2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int C[m1][n2]; // Resultant matrix

    // Initialize with zeros
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
