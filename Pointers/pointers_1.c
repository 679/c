#include<stdio.h>

int main()
{
	int i=40000, *b, *c;
	*b = i;
	b = &i;
	c = b;

	printf("i:%d\n *b:%d\n *c:%d\n",i, *b, *c);

	return 0;
}
