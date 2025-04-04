#include <stdio.h>
void main()
{
    float IIT, C, Math, Phy, Dl, total, per;
    printf("Enter mark for IIT,C,math,Phy,Dl:\n");
    scanf("%f%f%f%f%f", &IIT, &C, &Math, &Phy, &Dl);
    total = IIT + C + Math+ Phy + Dl;
    per = (total/500)*100;
    printf("percentage of student is %.2f",per);
}