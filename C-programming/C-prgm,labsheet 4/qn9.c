#include <stdio.h>
int recSum(int n)
{
    if (n <= 1)
        return n;

    return n + recSum(n - 1);
}
 
void main()
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Sum = %d ", recSum(n));
}
