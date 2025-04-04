#include<stdio.h>
void main()
{
    int meter,cm,ml;
    printf("Enter length into milimeter:\n");
    scanf("%d",&ml);
    cm = ml*10;
    meter = ml*1000;
    printf("Milimeter:%d , Centimeter:%d, Meter:%d",ml,cm,meter);
}