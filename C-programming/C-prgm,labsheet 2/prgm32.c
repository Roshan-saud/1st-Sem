#include<stdio.h>
void main() {
  int n, reverse = 0, remainder;
  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n =n/10;
  }

  printf("Reversed number = %d", reverse);
}