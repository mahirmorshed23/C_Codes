#include <stdio.h>

int main()
{
    int base, power, result=1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    for(int i=0; i<power; i++)
    {
        result*=base;
    }
    printf("%d to the power %d = %d", base, power, result);
    return 0;
}