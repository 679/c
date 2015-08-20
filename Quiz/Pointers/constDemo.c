#include <stdio.h>
int main()
{
	int i = 11;
	int *p = &i;
	//foo(&p);
	printf("*p: %d \n %d", *p, *(&(*p)));
}

/*
void foo(int *p)
{
	printf("%d \n\n", *p);
	int j = 10;
	*p = &j;
//	printf("%d ", *p);
}
*/
