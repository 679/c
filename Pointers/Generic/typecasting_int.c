#include <stdio.h>
int main()
{
	int i = 1;
	void *p = &i;
	printf("%d\n", *(int*)p);
	return 0;
}
