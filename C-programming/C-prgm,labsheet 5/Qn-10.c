#include<stdio.h>
void main ( ){
   int a[5];
   int *p,i;
   printf ("Enter 5 elements:\n");
   for (i=0; i<5; i++)
   {
        scanf ("%d", &a[i]);
   }
   p = &a[0];
   printf ("Elements of the array are: ");
   for (i=0; i<5; i++)
    printf("%d,", *(p+i));
}