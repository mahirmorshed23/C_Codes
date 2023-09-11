#include <stdio.h>

#define end "\x1b[0m"
#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"
#define purple "\x1b[35m"


int main()
{
    int num, x;
    printf(blue"Type marks: "end);
    scanf("%d", &num);
    x = num/10;

    switch (x)
    {
    case 6:
        printf(purple"D\n"end);
        break;
    case 7:
        printf(yellow"B\n"end);
        break;
    case 8:
        printf(blue"B\n"end);
        break;
    case 9:
    case 10:
        printf(green"A\n"end);
        break;
    default:
        printf(red"F\n"end);
        break;
    }
}