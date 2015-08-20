/*Generic pointer*/
#include<stdio.h>
main()
{
	int i = 0;
	int*p = &i;
	void *p0;
	p0 = p;

	printf("Address of generic pointer : %p\n", p0);
	// you cannot print the value of a void  pointer 
	// you cannot perform pointer arthmetic on generic poiter
//	printf("value of generic pointer : %d\n",*p0);
	printf(" Adress arthmetic of generic pointer: %p\n", p0+1);
}
