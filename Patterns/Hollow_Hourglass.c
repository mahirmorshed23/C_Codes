#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=n; i>0; i--)
    {
        for(int j=0; j<n-i; j++)
        {
            printf(" ");
        }
        for(int j=i; j>0; j--)
        {
            if(i==1 || i==n || j==1 || j==i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf(" ");
        }
        for(int j=i; j>0; j--)
        {
            if(i==1 || i==n || j==1 || j==i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}