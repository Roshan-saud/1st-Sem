#include<stdio.h>
void main() {
int a[10][10], b[10][10], c[10][10], n1,m1,n2,m2, i, j, k,temp=0;
 
printf("Enter row and column of 1st matrix:\n");
scanf("%d%d", &n1,&m1);
printf("Enter row and column of 2nd matrix:\n");
scanf("%d%d", &n2,&m2);
if(m1==n2)
{
printf("Enter the elements of Matrix-1: \n");
for (i = 0; i < n1; i++) {
    for (j = 0; j < m1; j++) {
        scanf("%d", & a[i][j]);
    }
}
printf("Enter the elements of Matrix-2: \n");
 
for (i = 0; i < n2; i++) {
    for (j = 0; j < m2; j++) {
        scanf("%d", & b[i][j]);
    }
}



for (i = 0; i < n1; i++) {
    for (j = 0; j < m2; j++) {
        temp = 0;
        for (k = 0; k < n2; k++) {
            temp = temp + a[i][k] * b[k][j];
             c[i][j] = temp;
        }
       
    }
}
 
printf("The product of the two matrices is: \n");
for (i = 0; i < n1; i++) {
    for (j = 0; j < m2; j++) {
        printf("%d\t", c[i][j]);
    }
    printf("\n");
}
}
else{
    printf("Matrix can't be multiple!");
}
}