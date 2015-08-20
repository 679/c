#include <stdio.h>
void foo(float *);
int main()
{
	int i = 1, *p = &i;
	foo(&i);
}
void foo(float *p)
{
	printf("%f\n", *p);
}
