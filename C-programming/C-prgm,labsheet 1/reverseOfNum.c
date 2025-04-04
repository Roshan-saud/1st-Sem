//Wap to reverse a six digit integer in reverse order
//No use of loop
#include<stdio.h>
void main()
{
    int num,d1,d2,d3,d4,d5,d6,n;
    printf("Enter 6 digit number:\n");
    scanf("%d",&num);
    n = num;
    d1 = num%10;
    num = num/10;
    d2=num%10;
    num = num/10;
    d3 = num%10;
    num = num/10;
    d4 = num%10;
    num = num/10;
    d5 = num%10;
    num = num/10;
    d6 = num%10;
    printf("Reverse of %d is %d%d%d%d%d%d",n,d1,d2,d3,d4,d5,d6);

}