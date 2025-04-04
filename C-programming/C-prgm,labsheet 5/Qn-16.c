#include <stdio.h>
#include<stdlib.h>
void main() {
  FILE *fp;
  char t[] = "I am studying well for board exam";
  fp = fopen("demo.txt", "w");
  if (fp == NULL) {
  printf("File not created.\n");
  exit(1);
  }
  fprintf(fp, "%s", t);
  fclose(fp);
  printf("Text written successfully.\n");


}