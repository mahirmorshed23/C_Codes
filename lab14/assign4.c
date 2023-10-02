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
	scanf("%d", &size);

	float arr[size], sum=0, average;

	for(int i=0; i<size; i++)
	{
		scanf("%f", &arr[i]);
	}

	for(int i=0; i<size; i++)
	{
		sum += arr[i];
	}
	
	average = sum/size;
	printf("Average: %f", average);
	printf("The elements greater than average are: ");

	for(int i=0; i<size; i++)
	{
		if(arr[i] > average) printf("%.f ", arr[i]);
	}
}
