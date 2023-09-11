// Write a program to print all even numbers between m and n (m, n are user inputs) in reverse order.

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Ener n: ");
    scanf("%d", &n);

    for(int i=n; i>=m; i--)
    {
        if(i%2==0)
            printf("%d ", i);
    }
}