#include<stdio.h>
void main()
{
    float a,b,c,d,e,avg;
    printf("Enter mark of 5 student:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float *p,*q,*r,*s,*t;
    p = &a;
    q = &b;
    r = &c;
    s =&d;
    t = &e;
    avg = (*p+*q+*r+*s+*t)/5;
    printf("Average mark=%.3f",avg);
}