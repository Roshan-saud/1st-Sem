#include<stdio.h>
void main()
{
    int n,*p;
    printf("Enter a number:\n");
    scanf("%d",&n);
    p = &n;
    printf("Value of n: %d\n",*p);
    printf("Address of n: %d",p);
}