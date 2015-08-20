/* return 0; will terminate your program execution */

#include<stdio.h>
main()
{
	int a=10, b=20;

	if(a>b)
	{
		printf("a>b\n");
	}
	else
	{
		printf("The program will exit now\n");
		return 0;
	}

	if(a<b)
	{
		printf("a is less than b\n");
	}
	else
	{
		printf("a is grater than b\n");
	}
}
