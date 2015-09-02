/* program to explain difference b/n cc and sl */
#include<stdio.h>
main()
{
	char c = 'A';
	char s[]="A"; //s[1] is not correct

	printf("size of 'A' is %lu\n", sizeof(c)); //--explain
	printf("size of \"A\" is %lu\n", sizeof(s)); //--explain
}
