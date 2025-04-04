#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter any 2 number");
    scanf("%d%d",&a,&b);
    if(a>0 && b>0)
    {
        printf("Both numbers are positive");
    }
    else{
        printf("number is negative");
    }
}