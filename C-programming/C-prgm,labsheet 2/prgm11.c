#include<stdio.h>
void main()
{
    float commission,sale;
    printf("Enter the sales of this month:\n");
    scanf("%f",&sale);
    if(sale<10000)
    {
     commission = (sale*5)/100;
     printf("Your commission of this month is %.3f",commission);
    }
    else if(sale>=10000)
    {
         commission = (sale*10)/100;
     printf("Your commission of this month is %.3f",commission);
    
    }
}