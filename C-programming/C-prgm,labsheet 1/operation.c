#include<stdio.h>
void main()
{
    int add,sub,mul;
    float div,a,b;
    printf("Enter 2 value for addition, Subtraction, Multiplication and division \n");
    scanf("%f%f",&a,&b);
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    printf("Addition=%d, Subtraction=%d,Multiplication=%d,division=%.3f",add,sub,mul,div);
}