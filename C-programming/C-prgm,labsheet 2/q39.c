#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 0; space < rows-i; space++) {
         printf("");
      }
      for(k=0;k<2*i-1;k++)
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
