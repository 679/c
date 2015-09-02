// program to explain pointer arthemetic 
// ignore the warning once in a while...
#include<stdio.h>
main()
{
	int i=10;
	int *p;
	p = &i;


	printf(" address of p is  : %u\n", p);
	printf(" address of p is  : %u\n", ++p);

//	printf("value  of Pointer p+1 is : %d\n", *(p+1));
}
