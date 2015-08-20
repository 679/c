#include<stdio.h>
int main()
{
	int i, j, n, s, k;

	printf("Enter a value: ");
	scanf("%d", &n);

	for (i=((n/2)+(n%2)), k=0; i>0; i--, k++)
	{
		printf("\n");
		for (s=0; s<k; s++)
		{
			printf(" ");
		}
		for (j=1; j<=i; j++)
		{
			if(j==1 || j==i)
			printf("%d", 1);
			else
				printf("  ");
		}
	}
	
	//Check if it is odd or even!

	if(n%2==0)
	{
		printf("%d",1);
	}

	for (i=0; i < ((n/2)+(n%2)) ; i++)
	{
		printf("\n");
		for (s=0; s<n-i; s++)
		{
			printf(" ");
		}
		for (j=1; j<=i; j++)
		{
			if(j==1 || j==i)
			printf("%d", 1);
			else
				printf(" ");
		}
	}

	printf("\n");
	return 0;
}
