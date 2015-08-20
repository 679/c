// The basic pointer use
#include <stdio.h>
#include <stdlib.h>
 
void main(void)
{
	// Declare and initialize an int variable
	int var = 34;
	// Declare a pointer to int variable
	int *ptr;
	// Initialize ptr to point to variable var
	ptr = &var;
	 
	// Access var directly and indirectly
	printf("\nDirect access, variable var value = var = %d", var);
	// you can use %p for the pointer memory address directly or
	// %0x or %0X or %p in hexadecimal representative instead of
	// %d, just to avoid confusion here
	printf("\nIndirect access, variable var value = *ptr = %d", *ptr);
	// Display the address of var two ways
	printf("\n\nThe memory address of variable var = &var = %p", &var);
	printf("\nThe memory address of variable var = ptr = %p\n", ptr);
}
