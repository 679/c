/* const int *ptr */
#include<stdio.h>
int main()
{
	const int *ptr;
//	int *ptr;

	int i=10,j=12;

	ptr = &i;
	ptr = &j;

	printf("j:%d\n", j);
	j = 1;
	printf("j:%d\n", j);
	(*ptr)++;
	printf("j:%d\n", j);
//	printf("i:%d\n", i);

	return 0;
}
