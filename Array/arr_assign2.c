// Write a program that delets all the elements in an array which match a search key.

#include <stdio.h>

int main()
{
	int arr[] = {14, 32, 45, 23, 78, 12, 45, 78, 12, 78, 11}, size, srckey;
	int found = 1;
	// getting the size of the array:
	size = sizeof(arr)/4;
	// Printing the current array:
	for(int i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	// Getting the search key from user:
	printf("Enter the search key: ");
	scanf("%d", &srckey);
	// Deleting every largest number from the array:
	for(int i=0; i<size; i++)
	{
		if(arr[i] == srckey)
		{
			for(int j=i; j<size; j++)
			{
				arr[j] = arr[j+1];
			}
			size--;
		}
	}
	// Printing the final array:
	for(int i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

