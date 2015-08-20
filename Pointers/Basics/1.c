#include<stdio.h>
main()
{
	int a;
	int *p;
	a = 10;
	p = &a;// &a => address of a

	printf("Address of p is %p\n", p);
	printf("Value at p is %d\n", *p);

	int b = 20;
	*p = b;// will the address in p change to point to b?

	printf("No, it remains the same\nAddress of p is %p\n", p);
	printf("Value at a is equal to b, i.e. %d\n",*p);
}
