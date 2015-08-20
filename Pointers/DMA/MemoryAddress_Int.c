#include<stdio.h>
void main()
{
	int i, Array[10];

	printf("Base address of array   : %d, %x, %p\n", &Array, &Array, &Array);
	printf("Base+1 Address of array : %d, %x, %p\n\n", &Array[1], &Array[1], &Array[1]);
	return 0;
}
