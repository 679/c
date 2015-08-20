/* the sizeof operator will return a long unsigned int */

#include<stdio.h>
main()
{
	int i;
	short int s;
	char c;
	float f;
	double d;


	printf("Size of c: (%lu) Byte(s)\n", sizeof(c));
	printf("Size of s: (%lu) Byte(s)\n", sizeof(s));
	printf("Size of i: (%lu) Byte(s)\n", sizeof(i));
	printf("Size of f: (%lu) Byte(s)\n", sizeof(f));
	printf("Size of d: (%lu) Byte(s)\n", sizeof(d));
}
