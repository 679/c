#include<stdio.h>
main()
{
	int n;
	printf("Enter N:");
	scanf("%d", &n);

	while(n-1 < n)
	{
		printf("%d\n",n);
		n--;
	}
}
