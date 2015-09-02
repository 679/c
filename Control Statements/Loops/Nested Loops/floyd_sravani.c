#include<stdio.h>
main()
{
	int i=0, j=0, n = 3;
	printf("Enter n value: ");
	scanf("%d",  &n);

	for(i=1; i<n;i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d ", j+i);
		}
		printf("\n");
	}
}
