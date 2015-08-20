/* pointers to pointers */

#include<stdio.h>
main()
{
	int i=10;
	int *p;
	int **q;
	int ***r;

	p = &i;

	q = &p;

	r = &q;

	printf("%d\n", i);
	printf("%d\n", *p);
	printf("%d\n", **q);
	printf("%d\n", ***r);

//	printf("-----");
}
