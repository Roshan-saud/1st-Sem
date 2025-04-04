#include <stdio.h>

int hcf(int, int);

int main()
{
  int n1, n2, gcd, lcm;
  printf("Enter two integer numbers:\n");
  scanf("%d%d", &n1, &n2);

  gcd = hcf(n1, n2);
  lcm = (n1*n2)/gcd;

  printf("HCF of %d and %d = %d\n", n1, n2,gcd);
  printf("LCM of %d and %d = %d\n", n1, n2, lcm);

  return 0;
}

int hcf(int a, int b) {
  if (b == 0)
  {
    return a;
  }
  else
  {
    return hcf(b, a % b);
  }
}