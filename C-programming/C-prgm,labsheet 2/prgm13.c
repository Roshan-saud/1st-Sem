#include <stdio.h>
void main()
{
    float physics, math, Chemistry, nepali, english, total, percentage;
    printf("Enter mark of Physics,Math,Chemistry,nepali,english respectively:\n");
    scanf("%f%f%f%f%f", &physics, &math, &Chemistry, &nepali, &english);
    total = physics + math + Chemistry + nepali + english;
    percentage = (total / 500) * 100;
    if (physics >= 45 && math >= 45 && Chemistry && nepali >= 45 && english >= 45)
    {
        if (percentage >= 80)
        {
            printf("You are pass\n");
            printf("Rank: Distinction\n");
        }
        else if (percentage >= 60 && percentage < 80)
        {
            printf("You are pass\n");
            printf("Rank: First division\n");
           
        }
        else
        {
            printf("You are pass\n");
            printf("Rank: Second division\n");

        }
    }
    else
    {
        printf("You are fail\n");

    }
            printf("Your percentage is %.3f\n", percentage);
}