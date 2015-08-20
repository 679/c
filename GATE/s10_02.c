#include<stdio.h>
main()
{
	printf("%d\n",func(435));
}
int func(int num)
{
	int count = 0;
	while (num)
	{
		count++;
		num >>= 1;
	}
	return (count);
}
