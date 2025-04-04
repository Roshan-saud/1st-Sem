
//Note: This is the program of question number 11

#include<stdio.h>
#include<string.h>
void main()
{
  char word[100];
  printf("Enter a word:\n");
  gets(word);
  printf("Your given word is %s\n",word);
 strlwr(word);
 printf("The given word in lowercase is %s",word);
}