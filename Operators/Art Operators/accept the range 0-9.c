/* Program which accepts numbers in the range [0-9] */
#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);

	if(a>10 || a<0)
	{
		printf("false\n");
	}
	else
	{
		printf("true\n");
	}
}
