#include<stdio.h>
main()
{
	int a,b;

	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);

	if(a>b)
	{
		printf("first %d is the biggest\n",a);
	}

	if(b>a)
	{
		printf(" second %d is the biggest\n",b);
	}

	if( a == b)
	{
		printf("third %d both are equal\n",a);
	}
}
