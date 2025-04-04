//WAP to show the use of typedef in c language



#include<stdio.h>
typedef int integer;
/*Here, Integer word is now consider as a new data type having same 
  Properties as int or in simple word "integer" word act as int data type */

typedef float decimal;
/*Here, Decimal word is now consider as a new data type having same 
  Properties as float */

typedef char character;
/*Here, Integer word is now consider as a new data type having same 
  Properties as int */
void main()
{
 integer a = 5;
 decimal b = 7.7;
 character c[10] = "roshan";
 printf("Integer value is %d and Float value is %f character value is %s",a,b,c);
}