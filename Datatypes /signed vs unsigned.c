/* This program is to demonastrate the sign vs. unsigned */
#include<stdio.h>

int main()
{
	signed int i = -1;
	unsigned ui = 1;

	if(i < ui)
	{
		printf("This will not be printed\n");
	}
	else
	{
		printf("1111 1111 > 00000001\n");
	}
}
