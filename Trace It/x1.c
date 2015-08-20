#include<stdio.h>

int main()
{
	int i, j, x;

	printf("Enter a value: ");
	scanf("%d", &x);

	for(i=0; i< ( x/2 + (x%2) ) ; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%d", 1);
		}
		printf("\n");
	}

	return 0;
}
