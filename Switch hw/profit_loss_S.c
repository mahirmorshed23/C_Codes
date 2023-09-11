#include <stdio.h>

#define end "\x1b[0m"
#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"


int main()
{
    int buy, sell, x, y;
    printf(blue"Enter the buying price: "end);
    scanf("%d", &buy);
    printf(blue"Enter the selling price: "end);
    scanf("%d", &sell);

    x = buy <= sell;
    switch (x)
    {
    case 1:
        y = sell - buy;
        switch(y)
        {
        case 0:
            printf(yellow"No profit no loss\n"end);
            break;
        default:
            printf(green"Profit: %d\n"end, y);
        }
        break;
    
    case 0:
        printf(red"Loss: %d\n"end, buy - sell);
        break;
    }
}