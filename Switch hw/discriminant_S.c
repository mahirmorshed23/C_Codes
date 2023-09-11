#include <stdio.h>

#define end "\x1b[0m"
#define red "\x1b[31m"
#define green "\x1b[32m"

int main()
{
    int a, b, c, x;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    x = (b*b - 4*a*c) >= 0;

    switch (x)
    {
    case 1:
        printf(green"The solutions will be real"end);
        break;
    case 0:
        printf(red"The solutions won't be real"end);
    }
    return 0;
}