#include <stdio.h>
void main() {
    int num, n, cube, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    n = num;

    while (n!= 0) {
       // remainder contains the last digit
        cube = n%10;
         result = result + cube * cube * cube;
         n = n/10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

}
