#include<stdio.h>
void main()
{
    int i, n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d are:\n", n);
    for(i=1; i<=n; i++)
    {
  
        if(i%2 == 0)
        {
            printf("%d,", i);
        }
    }
}