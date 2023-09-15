#include <stdio.h>
#include <math.h>

int main()
{
    int n, power=3, factorial=1;
    float x;
    printf("x: ");
    scanf("%f", &x);
    printf("n: ");
    scanf("%d", &n);
    float sum = x;
    for(int i=2; i<=n; i++)
    {
        factorial *= i;
        if(i%2==0)
            sum += (pow(x, power)/(float)factorial);
        else
            sum -= (pow(x, power)/(float)factorial);
        power+=2;
        printf("%.2f\n", sum);
    }
    printf("sum is %.2f", sum);
    return 0;
}
