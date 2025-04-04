#include<stdio.h>
void main()
{
     float math,physics,chemistry,nepali,english,percentage,total;
    printf("Enter your mark in math,phyiscs,chemistry,nepali,english respectively:\n");
    scanf("%f%f%f%f%f",&math,&physics,&chemistry,&nepali,&english);
      total = physics + math + chemistry + nepali + english;
       percentage = (total / 500) * 100;
     if (percentage >= 75)
        {
            printf("Rank: Distinction and percentage is %.3f",percentage);
        }
        else if(percentage >= 60 && percentage < 75)
        {
            printf("Rank: First division and percentage is %.3f",percentage);
           
        }
        else if(percentage >= 45 && percentage < 60)
        {
            printf("Rank: Second division  and percentage is %.3f",percentage);

        }

     else if(percentage >= 35 && percentage < 45)
        {
            printf("Rank: Second division and percentage is %.3f",percentage);
        }
    else
    {
        printf("You are fail\n");
    }
}