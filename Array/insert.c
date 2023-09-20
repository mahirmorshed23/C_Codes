#include <stdio.h>

void insert(int n, int pos, int item, int arr[])
{
	for(int i=n; i>pos; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[pos] = item;
}

void showArr(int n, int arr[])
{
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = {5,4,3,2,1};
	
	int n=5, pos, item;
	
	showArr(n, arr);
	
	while(n>0)
	{
		printf("Enter pos and item: ");
		scanf("%d %d", &pos, &item);
		if(pos<=n)
		{
			insert(n, pos, item, arr);
			n++;
		} 
		else
			printf("Out of space\n");
		
		showArr(n, arr);
	}
	return 0;
}
