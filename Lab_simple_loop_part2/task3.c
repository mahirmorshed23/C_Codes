// Write a C program to read input from user and count the total number nonzero
// digits

#include <stdio.h>

int main()
{
	int num, count=0;
	printf("Enter number: ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		if(num%10!=0)
			count++;
		num /= 10;
	}
	printf("%d", count);
}