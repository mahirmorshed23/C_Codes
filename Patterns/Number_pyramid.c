#include <stdio.h>

int main()
{
    int x=1, n;
    scanf("%d", &n);
    for(int i=0; i<n*2; i+=2)
    {
        for(int j=n*2; j>i; j-=2)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            printf("%d", x);
            x++;
            if(x==10)
                x=0;
        }
        printf("\n");
    }
    return 0;
}