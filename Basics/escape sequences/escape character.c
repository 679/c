/* program to explain escape sequences - 27 is ascii value for esc character */
#include<stdio.h>
main()
{
//	printf("This is \b a bad Idea\l what do you say\n");
//	printf("%c[32m", (char) 27);
	printf("%c[0q", (char) 27);
}
