/* typedef */
#include<stdio.h>
typedef struct complex{
	int imag;
	float real;
}comp ; 

int main()
{
	comp c;	
	c.imag = 123;
	c.real = 8.92;
	printf("%d\n", c.imag);

	return 0;
}
