#include<stdio.h>
int main()
{
	char Array[10];
	int i=0;

	printf("Base+%d Address of array : %ld, %x, %p\n",i, &Array, &Array, &Array);
	for(i=1; i<11; i++)
	{
		printf("Base+%d Address of array : %ld, %x, %p\n\n",i, &Array[i], &Array[i], &Array[i]);
	}
	return 0;
}
