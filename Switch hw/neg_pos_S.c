#include <stdio.h>

#define end "\x1b[0m"
#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"


int main()
{
    int num, x, y;
    printf(blue"Type a number: "end);
    scanf("%d", &num);

    x = num >= 0;
    switch (x)
    {
    case 1:
        y = num;
        switch(y)
        {
        case 0:
            printf(yellow"The number is zero\n"end);
            break;
        default:
            printf(green"This is a positive number\n"end);
        }
        break;
    
    case 0:
        printf(red"This is a negative number\n"end);
        break;
    }
}