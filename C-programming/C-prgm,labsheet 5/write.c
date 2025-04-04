//WAP to write name and age to a file "Newfile.txt"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
     FILE *fp;
  fp = fopen( "Newfile.txt","w");
  if(fp==NULL)
    {
        printf("Error occur");
        exit(1);
    }
  char name[25];
  int age;
  printf("Enter Name and age: \n");
  scanf("%s%d",name,&age);
  fprintf(fp,"Name: %s, Age: %d",name,age);
  printf("Sucessfully written");
  fclose(fp);

}

