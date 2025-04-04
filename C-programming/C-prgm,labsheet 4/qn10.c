#include <stdio.h>
int CD(int num)
{
    static int i=0;
     
    if(num>0)
    {
        i++;
        CD(num/10);
    }
    else
    {
        return i;
    }
}
void main()
{
    int n;
    int i=0;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&n);
     
    i=CD(n);
     
    printf("Total digits in number %d is: %d\n",n,i);
}