#include<stdio.h>
main()
{
	int i,n,r;
	printf("enter n:");
	scanf("%d",&n);
	printf("even numbers between 0 to %d!\n",n);
	for(i=0;i<n;i++)
	{
		r =	(i%2==0);
		{
			printf("%d\n",r);
		}
	}
}
