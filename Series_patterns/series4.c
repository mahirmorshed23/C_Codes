#include <stdio.h>

int main()
{
    int x = 1, N; 
    float sum = 0;
    scanf("%d", &N);
    while(x<=N)
    {
        sum+= (float)x/((float)x+1);
        x++;
    }
    printf("%.2f", sum);
}