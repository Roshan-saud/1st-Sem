#include<stdio.h>
void main()
{
    char name[100];
    int i;
    printf("Enter your name:\n");
    gets(name);
    printf("Here your name prints 5 time:\n");
    for(i=1;i<=5;i++)
    {  
        puts(name);
    }
}