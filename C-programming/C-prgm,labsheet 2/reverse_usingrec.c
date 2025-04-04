#include <stdio.h>
static int sum=0,rem;

int check(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      check(num/10);
   }
   else
      return sum;
}

int main(){
   int num ,rev;
   printf("Enter a number: ");
   scanf("%d",&num);
   rev=check(num);
   printf("The number after reversing is :%d",rev);
   return 0;
}