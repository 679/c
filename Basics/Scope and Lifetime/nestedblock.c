/*
Program to explain the scope and life time of variables 
 */

#include<stdio.h>
main()
{
	int i=0;

	{
		int j=0;
		printf("%d\n", ++i);
	}
		printf("%d\n", ++j);
}
