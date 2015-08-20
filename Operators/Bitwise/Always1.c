#include<stdio.h>
int main()
{
	int i=100;

	i = i&0;
	i = i^1;
	printf("%d\n", i);
}

