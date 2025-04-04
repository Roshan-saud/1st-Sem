//Wap to sum the digit of positive integer which is 5 digits long (without use of loop)

#include<stdio.h>
void main()
{
    int num,d1,d2,d3,d4,d5,sum,n;
    printf("Enter a number:\n");
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
    sum = d1+d2+d3+d4+d5;
    printf("Sum of each digit of %d is %d",n,sum);

}