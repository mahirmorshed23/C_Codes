#include <stdio.h>

int main()
{
	int arr[5] = {68, 54, 67, 89, 90},large, second_large;
	
	if(arr[0] > arr[1])
	{	
		large = arr[0];
		second_large = arr[1];
	}
	else
	{
		large = arr[1];
		second_large = arr[0];
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
			else second_large = arr[i];
		}
	}
	printf("Second large: %d", second_large);
	return 0;
}
