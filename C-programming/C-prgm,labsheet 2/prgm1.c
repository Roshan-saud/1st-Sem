#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Given number is even");
    }
    else {
        printf("Given number is odd");
    }
    return 0;
}