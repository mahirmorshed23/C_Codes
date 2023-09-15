#include <stdio.h>

int main()
{
    int first=0, second=1, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i=2; i<n; i++)
    {
        int temp = second;
        second = first+second;
        first = temp;
    }
    printf("%d", second);
}
