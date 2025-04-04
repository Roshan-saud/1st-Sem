
//Note: This is the program of question number 12

#include<stdio.h>
#include<string.h>
void main()
{
  char str[100];
  printf("Enter a word:\n");
  gets(str);
  printf("Your given word is %s\n",str);
 strupr(str);
 printf("The given word in Uppercase is %s",str);
}