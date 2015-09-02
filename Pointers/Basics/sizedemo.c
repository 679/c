// program to explain pointer arthemetic 
#include<stdio.h>
main()
{
	int i=10, *ip;
	char ch='c', *cp;
	

	printf("Size of integer is %ld bytes!\n", sizeof(int));
	printf("Size of integer pointer is %ld bytes!\n", sizeof(ip));
	printf("Size of char is %ld bytes!\n", sizeof(char));
	printf("Size of char pointer is %ld bytes!\n", sizeof(cp));

	/*
	printf("Address of pointer p+1 is : %p\n", p+1);
	printf("value  of Pointer p+1 is : %d\n", *(p+1));
	*/
}
