/* Note: you cannont dereference a void pointer */

#include<stdio.h>
#include <malloc.h>
int main()
{
	void *ptr;
	printf("%d",*ptr);

	return 0;
}
