/* program to exxplain why pointer shoould have types */

#include<stdio.h>
main()
{
	int i=1024;
	int *ip;
	char *cp;
	
	ip = &i;

	cp = (char *)&i;
	
	printf("%d\n", *ip);
	printf("%d\n", *cp);

}
