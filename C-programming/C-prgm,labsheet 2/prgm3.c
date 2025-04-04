#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter any 2 number:\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("Both a and b are equall");
    }
    else if(a>b)
    {
        printf("a is greater then b");
    }
    else{
        printf("b is greater then a");
    }
}