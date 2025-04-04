#include<stdio.h>
#include<math.h>
void main()
{
    float a , b ;
    printf("Enter a number\n");
    scanf("%f",&a);
    b = sqrt(a);
    printf("The square root of %.3f is %.3f",a,b);
}