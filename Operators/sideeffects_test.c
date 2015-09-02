#include<stdio.h>

int main()
{
	int i = 10;

	i = --i * ( i = 3 );

	printf("i: %d\n", i); // 9
}
