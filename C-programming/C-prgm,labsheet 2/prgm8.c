#include<stdio.h>
void main()
{
    float math,phyiscs,chemistry,total1,total2;
    printf("Enter your mark in math,phyiscs,chemistry respectively:\n");
    scanf("%f%f%f",&math,&phyiscs,&chemistry);
    total1 = math + phyiscs + chemistry;
    total2 = math+phyiscs;
    if(math>=60 && phyiscs>=50 && chemistry>=40)
    {
        if(total1>=200 || total2>=150)
        {
            printf("You are eligable candidate");
        }
    }
    else{
        printf("Sorry, You are not eligable");
    }
}