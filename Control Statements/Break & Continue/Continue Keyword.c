/* Program to explain continue */
#include<stdio.h>
main()
{
	int i,n;

	printf("Enter N: ");
	scanf("%d", &n);

	for(i=0; i<=n;i++)
	{
		if((i%10==0))
		{
			continue;
		}
		printf("%d\n",i);
	}
}
