//WAP to reverse a number using recursion

#include <stdio.h>
 
int check(int num){
    static int sum=0,rem;
  if(num!=0){
    rem=num%10;
    sum=sum*10+rem;
    check(num/10);
  }
  else
  {
     return sum;
  }
  
  return sum;
}
int main(){
  int num,ans;

  //Take the number as an input from user
  printf("Enter any number:");
  scanf("%d",&num);

  //Calling user defined function to perform reverse
  ans=check(num);
  printf("The reverse of entered number is :%d",ans);
  return 0;
}