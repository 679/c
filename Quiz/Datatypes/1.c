#include<stdio.h>
main()
{
	char c = 1;
	int a[5] = {1,2,3,4,5}, i = 1;

	if( i == c)
	{
		printf("Char = int\n");
	}
	if( (char)5 == '5')
	{
		printf("Char = int\n");
	}

	printf("%c\n", (char)65);
}
