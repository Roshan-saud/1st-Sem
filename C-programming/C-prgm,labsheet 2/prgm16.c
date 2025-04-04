#include <stdio.h>
void main()
{

    char operation;
    int a, b; 
    printf("Enter an operator (+, -, *, /,%% ):\n");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%f%f", &a, &b);
    switch (operation)
    {
    case '+':
        printf("%.3f + %.3f = %.3f", a, b, a + b);
        break;
    case '-':
        printf("%.3f - %.3f = %.3f", a, b, a - b);
        break;
    case '*':
        printf("%.3f * %.3f = %.3f", a, b, a * b);
        break;
    case '/':
        printf("a %% b =  %.3f", (float) a / b);
        break;

        case '%':
         printf("The modulas of %.3f %%  %.3f b:%d",a,b,a%b);
         break;
    default: 
        printf("Error! Give correct operation");
    }
}
