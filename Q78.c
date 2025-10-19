// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];

    // Read matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;

    // Sum of main diagonal elements
    for (int i = 0; i < n && i < m; i++)
    {
        sum += mat[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
