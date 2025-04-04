#include<stdio.h>
#include<string.h>
void main()
{
 char name[100],copy[100];
 printf("Enter word:\n");
 gets(name);
 strcpy(copy,name);
 printf("Your given word copied which is %s",copy);
}