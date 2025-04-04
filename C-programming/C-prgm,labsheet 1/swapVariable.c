//WAP to swap two number using temp variable

#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter the value of 2 variable:\n");
    scanf("%d%d",&a,&b);
    printf("Before-Swap: A=%d,B=%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After-Swap: A=%d,b=%d",a,b);
}