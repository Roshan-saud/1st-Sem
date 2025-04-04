#include<stdio.h>
#include<string.h>
void main()
{
  int a;
  char name[100];
  printf("Enter letter or words:\n");
  gets(name);
 a = strlen(name);
 printf("The length is %d",a);
}