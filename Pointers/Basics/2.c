// program to explain pointer arthemetic 
#include<stdio.h>
main()
{
	int i=10;
	int* p = &i;
	
	printf("value of pointer p is : %p\n", p);
	printf("Address of Pointer p is : %d\n", *p);

	printf("Size of integer is %ld bytes!\n", sizeof(int));

	printf("Address of pointer p+1 is : %p\n", p+1);
	printf("value  of Pointer p+1 is : %d\n", *(p+1));
}
