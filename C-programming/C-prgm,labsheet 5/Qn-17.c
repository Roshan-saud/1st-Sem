#include <stdio.h>
#include<stdlib.h>
void main() {
  FILE *fp;
  fp = fopen("demo.txt", "r");
  if (fp == NULL) {
  printf("File can't be read.\n");
  exit(1);
  }
  char ch;
  while ((ch = fgetc(fp)) != EOF) {
         printf("%c", ch);
    

  }
  fclose(fp);

}