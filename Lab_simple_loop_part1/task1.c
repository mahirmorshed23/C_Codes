//Write a C program that computes the sum of the series:
// 3+7+11+...+n, where n is a user input

#include <stdio.h>

int main()
{
    int n, sum=0;
    scanf("%d", &n);
    for(int i=3; i<=n; i+=4)
    {
        sum +=i;
    }
    printf("%d", sum);
}
