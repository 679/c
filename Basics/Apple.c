/* Program to to explain constants - print the address of a memory location */
#include<stdio.h>
int main()
{
	//Numeric Constatns 
	int marks = 85; // 85 Integer Constant
 	float gravitationalconstant = 9.8; // 9.8 Float Point Constant
	double pi = 3.141592653589793238462643383279502884;
	long double pii = 3.141592653589793238462643383279502884;

	printf(" Pi: %f\n", pi);
	printf(" Pi: %LfF\n", pii);
	printf(" Makrs: %d\n", marks);
	printf(" %p\n",&pi );
	return 0;
}
