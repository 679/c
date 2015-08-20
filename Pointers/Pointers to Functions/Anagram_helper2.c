/*
	This program is to compare two arrays 
*/
#include<stdio.h>
main()
{
	int A1[]={1,2,4444}, A2[]={1,2,3}, i=0, size=3;


	while((i<size)&&(A1[i]==A2[i]))
	{
		i++;
	}
	if(size == i)
	{
		printf("same arrays\n");
	}
	else
	{
		printf("Not same\n");
	}
}
