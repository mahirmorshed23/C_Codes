#include <stdio.h>

#define end "\x1b[0m"
#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"

int main()
{
    float num1, num2;
    char op;
    printf("First Number: ");
    scanf("%f", &num1);
    printf("Enter Operator: ");
    scanf(" %c", &op);
    printf("Second Number: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        printf(green"%.2f\n"red, num1 + num2);
        break;
    case '-':
        printf(red"%.2f\n"end, num1 - num2);
        break;
    case '*':
        printf(yellow"%.2f\n"end, num1 * num2);
        break;
    case '/':
        printf(blue"%.2f\n"end, num1 / num2);
        break;
    default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}