// Write a program that takes a minimum number, a maximum number, and common ratio and prints the
// sum of the geometric series between them

#include <stdio.h>

int main()
{
    int min, max, common_ratio, sum=0;
    printf("Enter minimum: ");
    scanf("%d", &min);
    printf("Enter maximum: ");
    scanf("%d", &max);
    printf("Enter Commmon ratio: ");
    scanf("%d", &common_ratio);

    for(int i=min; i<=max; i*=3)
    {
        if(i*3>max) 
            printf("%d =", i);
        else 
            printf("%d + ", i);
        sum += i;
    }
    printf("%d", sum);
    return 0;
}