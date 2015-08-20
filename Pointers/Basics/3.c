/* pointer types are strong typed */

#include<stdio.h>
main()
{
	int a = 1025;
	int *p;
	char *c;

	p = &a;
	
	printf("Size of integer is %ld bytes\n", sizeof(int));
	printf("Address of p = %p, value of p = %d\n", p, *p);
	printf("Address of p+1 = %p, value of p+1 = %d\n", p+1, *(p+1));

	c = (char*)p;// type casting

	printf("Size of integer is %ld bytes\n", sizeof(char));
	printf("Address of c = %p, value of c = %d\n", c, *c);
	printf("Address of c+1 = %p, value of p+1 = %d\n", c+1, *(c+1));
}
