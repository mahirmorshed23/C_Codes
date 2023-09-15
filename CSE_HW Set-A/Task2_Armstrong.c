#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, sum=0;
    printf("Enter staring and ending range: ");
    scanf("%d %d", &m, &n);

    for(int i=m; i<=n; i++)
    {
        int digit = 0;
        for(int j=i; j!=0; j/=10)
        {
            digit++;
        }
        for(int j=i; j!=0; j/=10)
        {
            int r = j%10;
            sum += pow(r, digit);
        }
        if(sum == i)
            printf("%d ", sum);
        sum = 0;
    }
}
