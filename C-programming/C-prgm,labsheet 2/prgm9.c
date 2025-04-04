#include<stdio.h>
void main()
{
    int century,non,year;
    printf("Enter year to check either leap year or not:\n");
    scanf("%d",&year);
    if(year%100==0)
    {

        if(year%400==0)
        {
            printf("Given century year is leap year");
        }
        else{
            printf("Given century year is not leap year");
        }
    }
    else{
        if(year%4==0)
        {
            printf("Given non-century year is leap year");
        }
        else{
            printf("Given non-century year is not leap year");
        }  } }