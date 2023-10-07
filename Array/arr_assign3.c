// Write a C program to print the 2nd largest & 2nd smallest elements of an array

#include <stdio.h>

int main()
{
	int arr[5] = {34, 5, 56, 23, 12}, large, second_large, small, second_small;

	if(arr[0] > arr[1])
	{
		large = second_small = arr[0];
		second_large = small = arr[1];
	}
	else
	{
		large = second_small = arr[1];
		second_large = small = arr[0];
	}
	
	for(int i=2; i<5; i++)
	{
		if(arr[i] > second_large)
		{
			if(arr[i] > large)
			{
				second_large = large;
				large = arr[i];
			}
			else if(arr[i] < large) second_large = arr[i];
		}
		if(arr[i] < second_small)
		{	
			if(arr[i] < small)
			{
				second_small = small;
				small = arr[i];
			}
			else if(arr[i] > small) second_small = arr[i];
		}
	}
	printf("second_large = %d\nsecond_small = %d\n", second_large, second_small);
}
