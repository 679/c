/* Program to print all the ascii values of i */

#include<stdio.h>
int main()
{
	unsigned char ch;
	int i=0;

	for(i=0; i <= 127; i++)
	{
		printf("The Ascii Value of %c is %d\n", i, i);
	}
}
