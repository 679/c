#include<stdio.h>
main()
{
	int a,b, big;

	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);

	big = (a>b)?a:b;

	printf("the biggest is: %d\n",big);
}

