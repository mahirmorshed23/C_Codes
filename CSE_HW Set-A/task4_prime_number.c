#include <stdio.h>

int primeOrNot(int x)
{
    for(int i=2; i<=x/2; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, count=0, x=2;
    printf("Write a number for Nth prime number: ");
    scanf("%d", &n);
    while(count<n)
    {
        int y = primeOrNot(x);
        if(y == 1)
        {
            if(count == n-1)
                printf("%d th prime number is %d", n, x);
            count++;
        }
        x++;
    }
}
