#include<stdio.h>
void main()
{
    int l,b,area,pem;
    printf("Enter length and width\n");
    scanf("%d%d",&l,&b);
    area = l*b;
    pem = 2*(l+b);
    printf("Area:%d, Perimeter:%d",area,pem);
}