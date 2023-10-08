// Write C program to check if an input string is a palindrome (e.g. “madam”, “dad”, etc.) or not.

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter the string: ");
	gets(str);

	int len = strlen(str)-1, i;

	for(i=0; i<len/2; i++)
	{
		if(str[i] != str[len-i])
		{
			printf("The string is not palindrome");
			break;
		}
	}
	if(i==len/2) printf("The string is palindrome");
	return 0;
}
