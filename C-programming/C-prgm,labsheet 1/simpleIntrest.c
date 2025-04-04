#include<stdio.h>
void main()
{
    float p,t,r,interest;
    printf("Enter principle, Time and rate\n");
    scanf("%f%f%f",&p,&t,&r);
    interest = (p*t*r)/100;
    printf("Your simple interest is %.3f",interest);
}