#include<stdio.h>
int main()
{
	int i = 10;
	void *ptr ;
	ptr = &i; /* you can store a value for you cannot dereference it*/

	/* you can't de-reference a pointer */
	printf("%d\n",  *ptr);
}
