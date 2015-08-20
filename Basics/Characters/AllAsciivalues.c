/*
   program to explain ascii values - and the characters backed by each ascii value
   */
#include<stdio.h>
main()
{
	int i=0;
	for(i=0;i<127;i++)
	{
		printf("%d - %c\n", i,i);
	}
}
