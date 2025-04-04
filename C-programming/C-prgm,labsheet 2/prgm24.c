#include<stdio.h>
void main()
{
    int i;
    for(i=100;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d,",i);
        }
    }
}
