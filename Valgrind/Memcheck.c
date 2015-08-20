/*  Memcheck is a memory error detector. It helps you make your programs, particularly those written in C and C++, more correct.
   */

/* valgrind --tool=memcheck -v ./a.out */
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
	char *p; 

	char c = *p; 

	printf("\n [%c]\n",c); 

	return 0;
}
