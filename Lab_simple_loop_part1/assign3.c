// Write a program that takes a minimum number, a maximum number, and common difference and prints
// the sum of the arithmetic series between them

#include <stdio.h>

int main()
{
    int min_num, max_num, common_diff, sum=0;
    printf("Enter minimum: ");
    scanf("%d", &min_num);
    printf("Enter maximum: ");
    scanf("%d", &max_num);
    printf("Enter Common difference: ");
    scanf("%d", &common_diff);

    for(int i=min_num; i<=max_num; i+=common_diff)
    {
        sum += i;
    }
    printf("%d", sum);
}