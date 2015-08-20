#include<stdio.h>
int main()
{
	int i, j, n, s, k;

	printf("Enter a value: ");
	scanf("%d", &n);

	for (i=n, k=0; i>1; i--, k++)
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
	printf("\n");
	return 0;
}
