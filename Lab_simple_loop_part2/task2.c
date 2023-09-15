// Write a C program to read an integer from user
// and count the total number of digits in it

#include <stdio.h>

int main()
{
    int num, digit=0, origin;
    printf("Type an integer: ");
    scanf("%d", &num);
    origin = num;
    for(int i=num; i!=0; i/=10)
    {
        digit++;
    }
    printf("There are %d digits in %d", digit, origin);
    
}