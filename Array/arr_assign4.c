/*
Write a program that reads the size and elements of an float array from user and then computes the
average of the numbers in it and prints it. Then it should compute number of elements which are
greater than average and prints those elements. Sample input/output:
Enter array size: 5
Enter elements: 12 13 16 15 14
Average = 14.000000, The elements greater than average are: 16, 15
*/

#include <stdio.h>

int main()
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	float arr[size], avg;
	printf("Enter the elements of the array: ");
	for(int i=0; i<size; i++)
	{
		scanf("%f", &arr[i]);
		avg+= arr[i];
	}
	
	avg/=size;
	printf("Average: %f, ", avg);
	printf("The elements greater than average are: ");
	for(int i=0; i<size; i++)
	{
		if(arr[i] > avg) printf("%f ", arr[i]);
	}
	return 0;
}

