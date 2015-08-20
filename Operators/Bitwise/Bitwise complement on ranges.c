#include<stdio.h>

/* 0 to 4,294,967,295
   0 to 65535
   0 to 18,446,744,073,709,551,615
*/

int main()
{
	unsigned int ui = 10;
	int i = 10;
	short int si = 65535;
	unsigned short int usi = 65535;

	printf("si: %d\t and ~si : %d\n", si, ~si);
	printf("USI: %d\t~usi:%d\n", usi, ~usi);
}
