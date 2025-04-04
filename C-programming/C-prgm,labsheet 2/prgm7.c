#include <stdio.h>
void main()
{
    float principal,rate,SI, time;
    printf("Enter Principal amount and time:\n");
    scanf("%f%f", &principal, &time);
    if (principal > 99999)
    {
        rate = 7;
        SI = (principal * time * rate) / 100;
        printf("Your SI is %.3f",SI);
    }
    else if (principal >= 50000 && principal <= 100000)
    {
        rate = 5;
        SI = (principal * time * rate) / 100;
        printf("Your SI is %.3f",SI);
    }
    else if (principal < 50000)
    {
        rate = 3;
        SI = (principal * time * rate) / 100;
        printf("Your SI is %.3f",SI);
    }
}