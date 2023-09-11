// Write a C program that reads an integer and then computes & prints the factorial of that integer

#include <stdio.h>

int main()
{
    int n, fact=1;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    printf("%d! = %d", n, fact);
}