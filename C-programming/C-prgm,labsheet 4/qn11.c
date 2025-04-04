
#include<stdio.h> 
#include<conio.h>
int CheckPrime(int,int);
void main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(CheckPrime(2,num)==0)
        printf("It is a Prime Number.");
    else
        printf("It is not a Prime Number.");
}
int CheckPrime(int i,int num)
{
    if(num==i  || num==1)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return CheckPrime(i+1,num);
    }
}
