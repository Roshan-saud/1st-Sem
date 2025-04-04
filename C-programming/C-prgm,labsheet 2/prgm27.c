#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        break;
    }
    if(n==i)
    {
        printf("Given number is Prime number");
    }
    else{
        printf("Composite number");
    }
}