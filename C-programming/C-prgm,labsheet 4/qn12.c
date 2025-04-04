#include <stdio.h>

void addComplex(int r1, int i1, int r2, int i2, int *rR, int *rI) {
    *rR = r1 + r2;
    *rI = i1 + i2;
}
void subComplex(int r1, int i1, int r2, int i2, int *rR, int *rI) {
    *rR = r1 - r2;
    *rI = i1 - i2;
}
void main() {
    int r1, i1, r2, i2;
    int rR, rI;
    printf("Enter real and complex of first:\n");
    scanf("%d%d", &r1,&i1);
    printf("Enter real and complex of second:\n");
    scanf("%d%d", &r2,&i2);
    addComplex(r1, i1, r2, i2, &rR, &rI);
    printf("Sum: %d + %di\n", rR, rI);
     subComplex(r1, i1, r2, i2, &rR, &rI);
    printf("Sub: %d + %di\n", rR, rI);
 
}