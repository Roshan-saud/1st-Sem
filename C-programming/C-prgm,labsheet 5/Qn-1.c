#include<stdio.h>
 struct student{
        int roll;
        char name[100];
        int grade;
        char gender;
        int age;  
    };
void main()
{
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
    {
         printf("Enter Name and gender(M/F) of %dStd:\n",i+1);
         scanf("%s %c",&s[i].name,&s[i].gender);
    }
    printf("Name of male students:\n");
    for(i=0;i<10;i++)
    {
        if(s[i].gender=='M')
        {
            printf("%s,",s[i].name);
        }
    }

}
