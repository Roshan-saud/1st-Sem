#include<stdio.h>
int sums(int*,int*);
void main()
{

    int n1, n2 ,*p1 ,*p2 ,sum=0 ;
    printf("Enter value of a and b:\n");
    scanf("%d%d",&n1,&n2);
    p1=&n1;
    p2=&n2;
    sum = sums(p1,p2);
    printf("Sum = %d",sum);



}
int sums(int*a,int*b)
{
    int s=0;
    s=*a+*b;
    return s ;
}
