#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows (odd number): ");
    scanf("%d", &rows);

    if (rows % 2 == 0)
    {
        printf("Please enter an odd number of rows for a symmetric diamond.\n");
        return 1;
    }

    for (int i = 1; i <= rows; i += 2)
    {

        for (int j = 0; j < (rows - i) / 2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = rows - 2; i > 0; i -= 2)
    {

        for (int j = 0; j < (rows - i) / 2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}