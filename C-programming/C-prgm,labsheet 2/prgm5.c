#include<stdio.h>
void main()
{
    int buy,discount;
    printf("How much amount you purchase?\n");
    scanf("%d",&buy);
    if(buy>=1000)
    {
     discount = (buy*5)/100;
    }
    else{
          discount = (buy*3)/100;
    }
       buy = buy - discount;
     printf("The amount you have to paid after discount is: %d",buy);
}