// program to explain pointer arthemetic 
#include<stdio.h>
int main()
{
	int i=10;
	int* p = &i;
	
	printf("magic address %p\n", &i);
	printf("value stored in the pointer p is : %p\n", p);
	printf("value at the Address of Pointer is *p is : %d\n", *p);

	return 0;
}
