#include<stdio.h>
int sum( int n );
void main()
{
    int n,res;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    res=sum(n);
    printf("Required sum = %d", res);
}

int sum( int n )
{
    if (n<=0)
    {
        return 0;
    }
    else
    {
        return ( n + 10 * sum ( n-1 ) );        //3+10*(2+10*1)
    }
}

