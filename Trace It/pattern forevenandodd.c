#include<stdio.h>

int main()
{

	int i,j,k,l,m,n;

	//read n
	printf("enter n value: ");
	scanf("%d", &n);

	for(j=n; j>=(n/2); j--)
	{
		printf("%d", 1);
	}
	if((n%2)==0)
	{
		for (int i=0; i<n; i++)
		{
			printf(" ");
		}
		printf("%d\n",1);
	}
	for(k=0; k<=(n/2); k++)
	{
		printf("%d", 1);
	}
	printf("\n");

	return 0;
}
