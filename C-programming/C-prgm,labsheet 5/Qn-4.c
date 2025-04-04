#include<stdio.h>
struct complex
{
    int real;
    int img;
};

void main()
{
    struct complex n1, n2, mul;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%d%d", &n1.real, &n1.img);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%d%d", &n2.real, &n2.img);
    mul.real = n1.real * n2.real - n1.img * n2.img;
    mul.img = n1.real * n2.img + n2.real * n1.img;

    printf("Product = %d + %di", mul.real, mul.img);
} 
