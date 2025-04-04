#include <stdio.h>
void main()
{
    float amount, discount;
    printf("How much amount of item you have purchase?\n");
    scanf("%f", &amount);
    if (amount >= 5000)
    {
        discount = (amount * 10) / 100;
     
    }
    else if (amount >= 4000 && amount < 5000)
    {
        discount = (amount * 7) / 100;
        
      
    }
    else if (amount >= 3000 && amount < 4000)
    {
        discount = (amount * 5) / 100;
        
    
    }
    else if (amount >= 2000 && amount < 3000)
    {
        discount = (amount * 3) / 100;  
    }
    else if (amount < 2000)
    {
        discount = (amount * 2) / 100;
        

    }
      amount = amount - discount;
       printf("The amount you have to paid after discount is: %.3f", amount);
}