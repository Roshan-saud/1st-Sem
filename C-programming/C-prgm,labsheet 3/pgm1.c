#include <stdio.h>
void main()
{
    int i, j, n, temp;
    printf("Enter how many term you wanna print:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending order:");
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
}