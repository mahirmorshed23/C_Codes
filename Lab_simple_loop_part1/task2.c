//  Write a C program to print all odd numbers from 1 to n (n is user input) using for loop.

#include <stdio.h>

int main()
{
    int sum=0, n;
    scanf("%d", &n);

    for(int i=1; i<=n; i+=2)
    {
        sum += i;
    }
    printf("%d", sum);
}