Q77: Check if the elements on the diagonal of a matrix are distinct.

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
    int row, col;
    int a[100][100];
    int i, j;
    int distinct = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter matrix elements:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (row != col)
    {
        printf("Diagonal exists only for square matrix.\n");
        return 0;
    }

   
    for (i = 0; i < row; i++)
    {
        for (j = i + 1; j < row; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}