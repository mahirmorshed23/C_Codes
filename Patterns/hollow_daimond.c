#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n*2; i+=2)
    {
        for(int j=n*2; j>i; j-=2)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            if(j==0 || j==i)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=n*2; i>=0; i-=2)
    {
        for(int j=n*2; j>i; j-=2)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            if(j==0 || j==i)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}