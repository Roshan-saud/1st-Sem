//WAP to swap two number without temporary variable

#include<stdio.h>
void main()
{ 
    int a,b;
    printf("Enter value of two variable:\n");
    scanf("%d%d",&a,&b);
    printf("Before-Swap: A=%d,B=%d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nAfter-Swap: A=%d,B=%d",a,b);
}