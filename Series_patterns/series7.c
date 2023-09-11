// 1/1 + 2/1+2 + 3/1+2+3;

#include <stdio.h>

int main()
{
    int n, denominator=0;
    float sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        
        for(int j=1; j<=i; j++)
        {
            denominator+=j;
        }
        sum = sum+((float)i/denominator);
        if(i==n)
            printf("%.2f = ", (float)i/denominator);
        else
            printf("%.2f + ", (float)i/denominator);
        denominator = 0;
    }
    printf("%.2f", sum);
    return 0;
}