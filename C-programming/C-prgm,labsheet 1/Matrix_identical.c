#include <stdio.h>
#include <stdlib.h>

void main()
{

    int a[10][10], b[10][10];
    int i, j, row1, column1, row2, column2, flag = 0;

    printf("Enter the order of the matrix A \n");
    scanf("%d %d", &row1, &column1);

    printf("Enter the order of the matrix B \n");
    scanf("%d %d", &row2, &column2);

    /*  Comparing two matrices for equality */

    if (row1 == row2 && column1 == column2)
    {

        printf("Enter the elements of matrix A \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of matrix B \n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("Matrices can be compared \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            printf("Matrix are not same");
        }
        else
        {
            printf("Matrix are same");
        }
    }
    else
        printf("\n Since, Matrix can't be compared. Hence, Matrix not same ");
}