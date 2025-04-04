#include<stdio.h>
#include<string.h>
void main()
{
    char word[100];
    int a,c=0,i,b=0,d=0,e=0,f=0;
    printf("Enter a word:\n");
    gets(word);
    a = strlen(word);
    for(i=0;i<a;i++)
    {
        if(word[i]=='a' || word[i]=='A' || word[i]=='e' || word[i]=='E' || word[i]=='i' || word[i]=='I'  || word[i]=='o' || word[i]=='O' ||
         word[i]=='u' || word[i]=='U' )
        {
            b = b+1;
        }
         else if(word[i]==' ')
        {
            c = c+1;
        }
        else if(word[i]==';')
        {
            d = d+1;
        }
        else if(word[i]>='a' && word[i]<='z' || word[i]>='A' && word[i]<='Z')
        {
          e = e+1;
        }
         else if(word[i]==',')
        {
            f = f+1;
        }
    }
    printf("No.of Vowel: %d\n",b);
    printf("No.of Consonant: %d\n",e);
    printf("No.of Space : %d\n",c);
    printf("No.of Semi-colon: %d\n",d);
    printf("No.of Commas : %d",f);
}