#include <stdio.h>
typedef struct cm {
    int real;
    int img;
} cmplx;
 
cmplx add(cmplx x, cmplx y)
{
    cmplx add;
    add.real = x.real + y.real;
    add.img = x.img + y.img;
    return (add);
}

int main()
{
    cmplx a, b, sum;
    printf("Enter real and img part of 1st:\n");
    scanf("%d%d",&a.real,&a.img);
    printf("Enter real and img part of 2nd:\n");
        scanf("%d%d",&b.real,&b.img);
    sum = add(a, b);
    printf("\n sum = %d + %di", sum.real, sum.img);
    return 0;
}
 
