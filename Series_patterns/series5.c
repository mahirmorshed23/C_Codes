#include <stdio.h>
#include <math.h>

int main()
{
    int x = 1, N; 
    float sum = 0;
    scanf("%d", &N);
    while(x<=N)
    {
        sum+= (float)x/pow((float)x+1, x);
        x++;
    }
    printf("%.2f", sum);
}