#include <stdio.h>
int fibo(int num);
void main()
{
    int num,i;
   
    printf("Enter any number to find nth fiboacci term: ");
    scanf("%d", &num);
    fibo(num); 
    printf("Fibonacii series: ");
    for(i=0;i<num;i++)
    {
     
        printf("%d,",fibo(i));
    }
}

int fibo(int num) 
{
    if(num == 0)      
        return 0;
    else if(num == 1) 
        return 1;
    else 
        return fibo(num-1) + fibo(num-2); 
}