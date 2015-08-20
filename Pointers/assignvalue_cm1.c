#include<stdio.h>
int main()
{
	/* you are giving me to store some data, however not informed me where 
	to store the data */
	int *p;
	*p = 2;

	printf("%d", *p);
}
