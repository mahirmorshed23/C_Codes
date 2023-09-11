// Write a program to compute the following series using while loop: 23+53+83+...+n3

#include <stdio.h>

int main()
{
    int n, sum=0;
    scanf("%d", &n);

    for(int i=2; i<=n; i+=3)
    {
        sum += i*i*i;
    }
    printf("%d", sum);
}