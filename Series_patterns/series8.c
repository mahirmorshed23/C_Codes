// 1/1 + (1/1+1/2) + (1/1 + 1/2 + 1/3) + ..... + (1/1 + 1/2 + .... + 1/n)

#include <stdio.h>

int main()
{
	int n;
	float sum =0;
	printf("n: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			sum += 1.0/j;
		}
	}
	printf("%.2f", sum);
}
