#include <stdio.h>

int main()
{
    int increase = 2, n, sum=0;
    scanf("%d", &n);

    for(int i=5; i<=n; i+=increase)
    {
        increase += 2;
        sum += i*i;
    }
    printf("%d\n", sum);
}