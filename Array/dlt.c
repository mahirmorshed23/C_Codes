#include <stdio.h>

void dlt(int arr[], int pos, int n)
{
	for(int i=pos; i<n; i++)
	{
		arr[i] = arr[i+1];
	}
}

void show(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int n=10, arr[] = {1,2,3,4,5,6,7,8,9,10};

	show(arr, n);

	int pos;
	printf("Type the postion where you want to delete: ");
	scanf("%d", &pos);

	dlt(arr, pos, n-1);
	n--;
	show(arr, n);
	return 0;
}	
