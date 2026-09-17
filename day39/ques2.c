Q78: Find the sum of main diagonal elements for a square matrix.

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
    int row, col;
    int a[100][100];
    int i, j;
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    // Check if matrix is square
    if (row != col)
    {
        printf("Matrix is not square.\n");
        return 0;
    }

    printf("Enter matrix elements:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of main diagonal
    for (i = 0; i < row; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d\n", sum);

    return 0;
}