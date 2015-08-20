#include<stdio.h>
main()
{
	int n, r;

	printf("Enter n: ");
	scanf("%d",&n);

	r = n&(n-1);

	if(r == 0)
	{
		printf(" The given number is a power of 2\n");
	}
	else
	{
		printf(" It's not a power of 2\n");
	}
}
