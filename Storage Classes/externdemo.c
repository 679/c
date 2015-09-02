/**/
#include<stdio.h>
int g = 0;

void fun()
{
	extern int a=10;
}

int main()
{
	int i=0;

	printf("%d\n", i);
	printf("%d\n", a);

	return 0;
}

