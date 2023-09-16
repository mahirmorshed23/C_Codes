#include <stdio.h>

int main()
{
	int m, n;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==0|| i==m-1 || j==0 || j==n-1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
