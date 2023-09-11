#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(i==1)
            printf("    ");
        else if(i%2==0)
            printf("  ");
        else
            printf(" ");
        for(int j=0; j<i; j++)
        {
            printf("%d", j%2);
        }
        printf("\n");
    }
}

/*
####0
##01
#010
##0101
#01010

*/