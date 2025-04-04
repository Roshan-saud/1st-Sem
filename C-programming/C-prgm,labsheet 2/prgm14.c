#include<stdio.h>
void main()
{
    char grade;
    printf("Enter your grade:\n");
    scanf("%c",&grade);
    switch(grade)
    {
    case 'A':
        printf("EXCELLENT");
        break;
       case 'B':
        printf("VERY GOOD");
        break;
         case 'C':
        printf("GOOD");
        break;
         case 'D':
        printf("SATISFACTORY");
        break;
         case 'E':
        printf("FAIL");
        break;
    default :
       printf("Enter grade properly");
        break;
    }
}