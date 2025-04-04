#include <stdio.h>
int main ()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
 if (num%2 == 0)
 {
goto even; 
 }

else
{
goto odd; 
}
even:
printf ("%d is even", num);
return 0;
odd:
printf ("%d is odd", num);
return 0;
//use int main function not void becoz we need to return at the last.
}