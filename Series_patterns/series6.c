// 1 + x^2/1! + x^4/2! + x^6/3! .... x^n*2/n!

#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, power=1, factorial=1;
    float sum = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    for(int i=1; i<n; i++)
    {
        factorial *= i;
        sum += (pow(x, power)/(float)factorial);
        power+=2;
        printf("%.2f\n", sum);
    }
    printf("sum is %.2f", sum);
    return 0;
}
