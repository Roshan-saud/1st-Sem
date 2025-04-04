#include <stdio.h>
int pw(int n1, int n2);
void main() {
    int b, a, re;
    printf("Enter base number: ");
    scanf("%d", &b);
    printf("Enter power number: ");
    scanf("%d", &a);
    re = pw(b, a);
    printf("%d^%d = %d", b, a, re);
}

int pw(int b, int a) {
    if (a != 0)
        return (b*(pw(b,a-1)));
    else
        return 1;
}