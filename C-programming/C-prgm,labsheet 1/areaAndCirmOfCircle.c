#include<stdio.h>
#define pi 3.14
void main()
{
    float r,area,cirm;
    printf("Enter the value of radius\n");
    scanf("%f",&r);
    area = pi*r*r;
    cirm = 2*pi*r;
    printf("Area=%.3f Circumference=%.3f",area,cirm);
}