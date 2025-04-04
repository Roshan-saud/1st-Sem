#include <stdio.h>
#include<stdlib.h>
void main() {
  FILE *fp;
  char t[100];
  char fn[100];
  printf("Enter file name: ");
  gets(fn);
  fp = fopen(fn, "a");
  if (fp == NULL) {
  printf("File not created.\n");
  exit(1);
  }
  printf("Enter text for append: ");
  gets(t);
  fprintf(fp, "%s", t);
  fclose(fp);
  printf("Text append successfully.\n");


}