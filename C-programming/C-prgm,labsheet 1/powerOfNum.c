#include<stdio.h>
#include<math.h>
void main()
{
    int a , b,c;
    printf("Enter a number for baseValue and powerValue\n");
    scanf("%d%d",&a,&b);
    c = pow(a,b);
    printf("The value after giving power is %d",c);
}