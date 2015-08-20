#include<stdio.h>
main()
{
	int i=65535, j;

	for(j=1; j<=32; j++)
	{
		printf("%d\n",i>>j);
	}
}
