#include<stdio.h>
void main()
{
    float p,t,r,si;
    printf("Enter your deposite Amount:\n");
    scanf("%f",&p);
    printf("Enter your deposite time:\n");
    scanf("%f",&t);
    if(p<1000 && t>=2 && t<5)
    {
        r = 5;
    }
     else if(p>=1000 && p<5000 && t>=2 && t<5)
    {
        r = 7;
    }
    else if( p>5000 && t>=1 && t<5)
    {
        r = 8;
    }
    else if(t>=5)
    {
        r = 10;
        
    }
    else{
           r = 3; 
    }
    si = (p*t*r)/100;
        p = p+si;
        printf("Amount of money on your account: %.3f,time:%.3f and Intrest-credited:%.3f",p,t,si);  
}