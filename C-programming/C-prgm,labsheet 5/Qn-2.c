#include<stdio.h>
struct complex
{
   int real, img;
};

void main()
{
   struct complex a, b, c;

   printf("Enter real and img part of 1st.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter real and img part of 2nd.\n");
   scanf("%d%d", &b.real, &b.img);
   c.real = a.real + b.real;
   c.img = a.img + b.img;
   printf("Sum of complex numbers: %d + %di", c.real, c.img);
}