#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c, s,area;
    printf("Enter three side of triangle\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s* (s-a)* (s-b)* (s-c));
    printf("TriangleArea= %.3lf",area);

}