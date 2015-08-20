#include<stdio.h>
int main()
{
	int i=0,j=0,n=0;

	printf("Enter N: ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=n-i; j>0; j--)
		{
			if (j==i) break;

			printf("%d", 1);
		}
		printf("\n");
	}
}
