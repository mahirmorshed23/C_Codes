#include <stdio.h>

int main()
{
    int x = 1, N, multi = 1;
    scanf("%d", &N);
    while(x<=N)
    {
        multi*= x;
        x++;
    }
    printf("%d", multi);
}