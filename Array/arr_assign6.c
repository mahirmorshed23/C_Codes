// Write C program to count the number of capital letters and the number of small letters in an input string 
// and print those numbers.
#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[100];
	int capital=0, small=0;
	printf("Enter string: ");
	gets(str);
	
	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='A' && str[i]<='Z') capital++;
		else if(str[i]>='a' && str[i]<='z') small++;
	}

	printf("Capital letters: %d, Small letters %d", capital, small);
}

