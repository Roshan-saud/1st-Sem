#include<stdio.h>
void main() {
 int num,sum=0;
 printf("Enter positive numbers and (0 or -ve number to stop):\n");
 scanf ("%d", &num);
 while (num > 0) {
  sum = sum + num;
  scanf ("%d", &num);
 }
  printf ("Sum = %d ", sum);
}