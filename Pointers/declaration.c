#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr, *q;

	ptr = (int *)malloc(sizeof(int));

	printf("print the address of ptr variable\n");

	printf("%d\n", ptr);
	printf("%u", ptr);
	printf("\n---------x------------\n printing value without allocating\n");
	printf("\n memory allocated: %d\n memory not allocated : %d\n", *ptr, *q);

	return 0;
}
