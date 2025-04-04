#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any 3 number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is greater");
    }
    else if(b>a && b>c)
    {
        printf("b is greater");
    }
    else if(c>a && c>b){
        printf("c is greater");
    }
    else {
        printf("Greater can't be decided because all are equall");
    }
}