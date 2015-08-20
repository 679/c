#include <stdio.h>
int main()
{
	float f = 1;
	void *p = &f;
	printf("%d\n", *(int*)p);
	printf("%d\n", *(float*)p);
	return 0;
}
