// Write a C program to read an integer from user and count the total numbers of digit in it.

#include <stdio.h>

int main()
{
	int num, digits=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(int i=num; i!=0; i=i/10)
	{
		digits++;
	}
	printf("%d", digits);
	return 0;
}
