#include <stdio.h>

int main()
{
    int sum=8;
    for(int i=10000; i>=16; i=i/5)
    {
        sum += i;
    }
    printf("%d", sum);
}