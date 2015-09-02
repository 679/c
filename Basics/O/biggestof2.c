#include<stdio.h>
main()
{
	int a,b,c;


	scanf("%d%d%d", &a, &b, &c);

	if(a>b)
	{
		if(a>c)
		{
			printf("The biggest is: %d\n",a);
		}
		else
		{
			printf("The biggest is: %d\n",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d\n",b);
		}
		else
		{
			printf("%d\n",c);
		}

	}
}
