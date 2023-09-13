// Write a C program to print all odd numbers from 1 to n using loop;

#include <stdio.h>

int main()
{
    int n, count=1;
    printf("n: ");
    scanf("%d", &n);

    while(count <= n)
    {
        printf("%d ", count);
        count+=2;
    }
}