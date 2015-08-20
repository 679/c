#include<stdio.h>
main()
{
	int a=0,b=0, c;

	c = !(!(a||b));

	printf("%d\n", c );
}
