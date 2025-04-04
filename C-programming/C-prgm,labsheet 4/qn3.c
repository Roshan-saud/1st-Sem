#include <stdio.h>
int fibo(int num);


int main()
{
    int num,f;
   
    printf("Enter any number to find nth fiboacci term: ");
    scanf("%d", &num);
    
    f = fibo(num); 
    
    printf("%d fibonacci term is %d", num, f);
    
    return 0;
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