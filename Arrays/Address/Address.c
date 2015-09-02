/* Program to demonstrate int a[10], &a and &a[0] and a */

#include<stdio.h>
main()
{
	char array[16];
	printf("&array[0]: %p\n &array:%p\n array:%p\n", &array[0], &array, array);

	printf("(void *)&array:%p\n (void *)(&array+1)%p\n", (void*)&array, (void*)(&array+1));
}
