// Write a C program to compute the value of nPr = n*(n-1)*(n-2)*...*(n-r+1), read n and r from user.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, sum=1;
    scanf("%d %d", &n, &r);

    for(int i=0; i<=r-1; i++)
    {
        sum *= n-i;
    }
    printf("%d", sum);
}