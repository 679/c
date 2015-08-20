#include <stdio.h>
int main()
{
	int i;
	int *p;
	i = 5;
	p = &i; /* now *p == i */
	printf("i=%d, p=%p, *p=%d\n", i, p, *p);
	*p = 6; /* same as i = 6 */
	printf("i=%d, p=%p, *p=%d\n", i, p, *p);
	return 0;
}
