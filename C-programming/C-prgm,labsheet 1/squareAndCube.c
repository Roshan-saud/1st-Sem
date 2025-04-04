#include<stdio.h>
void main()
{
    int square,cube,a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    square = a*a;
    cube = a*a*a;
    printf("Square of %d is:%d, Cube of %d is:%d",a,square,a,cube);
}