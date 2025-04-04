#include<stdio.h>
#include<string.h>
void main()
{
    char name[100];
    int i,a;
    printf("Enter your name:\n");
    gets(name);
    a = strlen(name);
    printf("ASCII value of %s is:\n",name);
    for(i=0;i<a;i++)
    {
        printf("%c = %d\n",name[i],name[i]);
    }
}