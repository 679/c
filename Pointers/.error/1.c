#include <stdio.h>
int main()
{
	int i = 10, *iPtr=NULL;
	void *p;
	
	*iPtr = &i;

	printf("%d\n", *iPtr);
	return 0;
}
