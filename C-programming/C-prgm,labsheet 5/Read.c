//WAP to read the data from a file "Newfile.txt"
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp = fopen("Newfile.txt","r");
    if(fp==NULL)
    {
        printf("Error occur");
        exit(1);
    }
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    
}