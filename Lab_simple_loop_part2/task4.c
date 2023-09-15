// Write a C program to find all the factors of a number;

#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter any number to find its factor: ");
	scanf("%d", &num);
	
	printf("All factors of %d are: ", num);
	
	for(int i=1; i<=num/2; i++)
	{
		if(num%i==0)
			printf("%d ", i);
	}
}
