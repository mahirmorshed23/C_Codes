#include <stdio.h>

#define end "\x1b[0m"
#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"
#define purple "\x1b[35m"

int main()
{
    int x;
    printf("Day number: ");
    scanf("%d", &x);
    
    switch (x)
    {
    case 0:
        printf(red"Saturday\n"end);
        break;
    case 1:
        printf(green"Sunday\n"end);
        break;
    case 2:
        printf(yellow"Monday\n"end);
        break;
    case 3:
        printf(blue"Tuesday\n"end);
        break;
    case 4:
        printf(purple"Wednesday\n"end);
        break;
    case 5:
        printf(red"Thursday\n"end);
        break;
    case 6:
        printf(green"Friday\n"end);
        break;
    default:
        printf(blue"Invalid Day Number\n"end);
        break;
    }
    return 0;
}