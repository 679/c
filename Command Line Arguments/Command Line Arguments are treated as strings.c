/* Command line arguments are treated as character strings */
#include<stdio.h>
#include<stdlib.h>

void main( int argc, char * argv[])
{

	int i =0;

	for (i=0; i< argc; i++)
	{
		printf("%s\n", *(argv+i));
	}


}
