#include <stdio.h>

int main()
{
    int x = 1, N, sum = 0;
    scanf("%d", &N);
    while(x<=N)
    {
        if(x%2==0)
            sum-= x;
        else
            sum+= x;
        x++;
    }
    printf("%d", sum);
}