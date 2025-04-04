#include <stdio.h>
int sum (int a);
void main()
{
    int n, f;
 
    printf("Enter the number: ");
    scanf("%d", &n);
    f = sum(n);
    printf("Sum of digits in %d is %d\n", n, f);
}
 
int sum (int n)
{
    if (n != 0)
    {
        return (n % 10 + sum (n / 10));
    }
    else
    {
       return 0;
    }
}