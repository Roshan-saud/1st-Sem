#include<stdio.h>
void main()
{
    float salary,tax,deduction;
    printf("Enter your salary:\n");
    scanf("%f",&salary);
    if(salary<10000)
    {
        printf("No taxes include, your salary is %.3f",salary);
    }
    else if(salary>=10000 && salary<20000)
    {
        deduction = (salary*10)/100;
    }
    else if(salary>=20000 && salary<40000)
    {
        deduction = (salary*15)/100;
    }
     else if(salary>=40000)
    {
        deduction = (salary*20)/100;
    }
       salary = salary - deduction;
        printf("Your salary after including tax is %.3f",salary);
}