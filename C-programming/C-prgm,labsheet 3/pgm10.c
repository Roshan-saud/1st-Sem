#include<stdio.h>
#include<string.h>
void main()
{
 char ne[100],cnd[100];
 printf("Enter first word:\n");
 gets(cnd);
 printf("Enter second word:\n");
 gets(ne);
 strcat(cnd,ne);
 printf("Append word is %s",cnd);
}