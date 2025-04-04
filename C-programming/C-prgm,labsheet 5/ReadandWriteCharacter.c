//WAP to copy the content of "Newfile.txt" to "Nextfile.txt"
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1 = fopen("Newfile.txt","r");
    if(fp1==NULL)
    {
        printf("Error occur");
        exit(1);
    }
    fp2 = fopen("Nextfile.txt","w");
      if(fp2==NULL)
    {
        printf("Error occur");
        exit(1);
    }
    //Remember that fgetc and fputc are used to read and write the character  to the file.
    while((ch=fgetc(fp1))!=EOF)
    {
             fputc(ch,fp2);

       
    }
    printf("Sucessfully written");
    fclose(fp1);
    fclose(fp2);
}


/*
If que : Copy text from one file to another but only vowel
   while((ch=fgetc(fp1))!=EOF)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            //Remember dibbi that, if condition is checking single-single digit not all text at a time
            // as you can see in fgetc() helps to take 1 by 1 bit until EOF
             fputc(ch,fp2);
        }
       
    }

*/
