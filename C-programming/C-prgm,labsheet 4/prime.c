//WAP to print prime number upto a number that user given
#include<stdio.h>
int main()
{
    int n,i,fact,j;
    printf("Enter the Number");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Give positive number");
    }
    else{
        printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d," ,i);
    }
    }
   
    return 0;
}