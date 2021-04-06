#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    char op;
    double x, y;

    printf("Enter an operator: ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    switch (op)
    {
    case '+':
        printf("%lf + %lf = %lf", x, y, x + y);
        break;
    case '-':
        printf("%lf - %lf = %lf", x, y, x - y);
        break;
    case '*':
        printf("%lf * %lf = %lf", x, y, x * y);
        break;
    case '/':
        if (y != 0)
            printf("%lf / %lf = %lf", x, y, x / y);
        else
            printf("y can not be equal to 0...");
        break;
    default:
        printf("Error...");
        break;
    }
}
