#include<stdio.h>
void sort(int a[100], int n);
void main()
{
 int a[100], i, n;
 
 printf("Enter term:\n");
 scanf("%d", &n);
 for(i=0;i< n;i++)
 {
  scanf("%d", &a[i]);
 }
 
 sort(a,n);
 
 printf("Ascending order:\n");
 for(i=0;i< n;i++)
 {
  printf("%d\t", a[i]);
 }
 
}
void sort(int a[100], int n)
{
 int i, j, temp;
 for(i=0;i< n;i++)
 {
  for(j=0;j< n;j++)
  {
   if(a[j]<a[i])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}