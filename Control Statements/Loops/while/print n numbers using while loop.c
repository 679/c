/* program to print all the numbers from 1 to n */
#include<stdio.h>
main()
{
	int i,n;
	printf("Enter N:");
	scanf("%d", &n);

	i=1;
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}
