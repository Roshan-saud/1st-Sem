#include<stdio.h>
void main()
{
    int doller;
    float rs,a;
    printf("Enter value in doller:\n");
    scanf("%d",&doller);
    printf("Enter equivelent value of 1doller into ruppee:\n");
    scanf("%f",&a);
    rs = doller*a;
    printf("%dDoller is %.3frupee",doller,rs);
}