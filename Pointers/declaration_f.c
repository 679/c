#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;

	ptr = (int*) malloc (sizeof(int));
	*ptr = 10;

//	printf("print the address of ptr variable\n");
//	printf("%d\n", ptr);
//	printf("%u", ptr);
//	printf("--------");
//	printf("\naddress of pointer(&ptr):%d\n", &ptr);
//	printf("\n---------x------------\n printing value without allocating\n");
//	printf("%d\n", *(&ptr));
	printf("%d\n", *ptr);

	free (ptr);
//	printf("%d\n", *ptr);
	return 0;
}
