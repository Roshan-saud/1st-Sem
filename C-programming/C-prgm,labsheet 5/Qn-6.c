#include<stdio.h>

struct time
{
    int hr;
    int min;
    int sec;
};

void main()
{
    struct time s1, s2, d;
    printf("Enter hours, minutes and seconds of start time:\n");
    scanf("%d%d%d", &s1.hr,&s1.min, &s1.sec);
    printf("Enter hours, minutes and seconds of stop time:\n");
    scanf("%d%d%d", &s2.hr,&s2.min, &s2.sec);

    if(s1.sec > s2.sec)
    {
        s2.sec = s2.sec +60;
        --s2.min;
    }

    if(s1.min > s2.min)
    {
        s2.min = s2.min+60;
        --s2.hr;
    }

    d.sec = s2.sec - s1.sec;
    d.min = s2.min - s1.min;
    d.hr = s2.hr - s1.hr;

    printf("Difference = %dHour : %dmin : %dsec", d.hr, d.min, d.sec);
   
}