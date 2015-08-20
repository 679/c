#include<stdio.h>
main()
{
	int i = 10, j = 20;
	int *p = NULL;

	p = &j;

	if(p)
	{
		printf("Pointer *p is poinintg to something valid\n");
		printf("%d\n", *p);
	}
	else
	{
		printf("This is not a valid pointer\n");
	}

}
