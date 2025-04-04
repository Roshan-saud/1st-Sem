//WAP to copy digit from nfile1 to nfile2.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1,*fp2;
    long int dg;
    fp1 = fopen("Nextfile.txt","r");
    if(fp1==NULL)
    {
        printf("Error occur");
        exit(1);
    }
    fp2 = fopen("Newfile.txt","w");
      if(fp2==NULL)
    {
        printf("Error occur");
        exit(1);
    }
  

    //Remember that getw and putw are used to read and write the digit to the file.
    while((dg=getw(fp1))!=EOF)
    {
          putw(dg,fp2);

    }
    printf("Sucessfully written");
    fclose(fp1);
    fclose(fp2);
}


