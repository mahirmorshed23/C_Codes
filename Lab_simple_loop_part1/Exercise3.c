// Write a program to compute the following series using while loop: 4+11+18++....+n

#include <stdio.h>

int main()
{
    int n, sum=0;
    scanf("%d", &n);
    for(int i=4; i<=n; i+=7)
    {
        sum += i;
    }
    printf("%d", sum);
}