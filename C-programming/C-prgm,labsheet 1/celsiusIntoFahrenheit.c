#include<stdio.h>
void main()
{
    float celsius,frht;
    printf("Enter temperature in celsius\n");
    scanf("%f",&celsius);
    frht = (celsius*9/5)+32;
    printf("temperature in fahrenheit is %.3f",frht);
}