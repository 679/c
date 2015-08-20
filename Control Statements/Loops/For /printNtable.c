/* Program to print tables */
#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n", n,i,n*i);
	}
}
