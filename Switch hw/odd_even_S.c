#include <stdio.h>

#define end "\x1b[0m"
#define red "\x1b[31m"
#define green "\x1b[32m"
#define blue "\x1b[34m"

int main()
{
    int x, y;
    printf(blue"Type a Number: "end);
    scanf("%d", &x);
    
    y = x % 2;
    switch (y)
    {
    case 0:
        printf(green"Even\n"end);
        break;
    case 1:
        printf(red"Odd\n"end);
    }
}