#include <stdio.h>

#define end "\x1b[0m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"

int main()
{
    float x, y;
    printf(blue"Write two numbers with space: "end);
    scanf("%f %f", &x, &y);
    
    int z = x > y;

    switch(z)
    {
    case 1:
        printf(green"%.2f is the max number\n"end, x);
        break;
    case 0:
        printf(yellow"%.2f is the max number\n"end, y);
        break;
    }
    return 0;
}