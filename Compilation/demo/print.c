#include <stdio.h>
#define STRING "Hello World, I am a macro\n"
int main(void)
{
	/* Comments will be stipped off */
	/* Using a macro to print 'Hello World'*/
	printf(STRING);
	return 0;
}
