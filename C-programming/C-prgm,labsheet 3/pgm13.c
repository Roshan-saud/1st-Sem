#include<stdio.h>
#include<string.h>
void main()
{
  char name[100];
  printf("Enter a word:\n");
  gets(name);
  printf("Your given word is %s\n",name);
 strrev(name);
 printf("Reverse word is %s",name);
}