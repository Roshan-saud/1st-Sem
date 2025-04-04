#include<stdio.h>
int fact(int n);
void main()
{
  int f,n;
  printf("Enter a number:\n");
  scanf("%d",&n);
  f = fact(n);
  printf("The factorial is %d",f); 
}
int fact(int n)
{
    int r;
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        r = n*fact(n-1);
    }
    return r;
}