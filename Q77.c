// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];

    // Read matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int diag[r < c ? r : c];
    int k = 0;

    // Extract diagonal elements
    for (int i = 0; i < r && i < c; i++)
    {
        diag[k++] = mat[i][i];
    }

    // Check distinctness
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (diag[i] == diag[j])
            {
                printf("False\n");
                return 0; // exit immediately if duplicate found
            }
        }
    }

    printf("True\n");
    return 0;
}
