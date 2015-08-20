/*
   * This program is created on June 15, 2015 by prasanth vaindam
   * It is to demonastrate the behaviour implict type of real numbers
     
   by defaut a fractional number (real number) will be double except for x.0 and x.5 it will be a float.
   *
*/

#include<stdio.h>
int main()
{

	double	d = 3.509;
	float f1 = 3.0, f2 = 3.5, f3 = 3.509;


	if(f1==3.0)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}


	if(f2==3.5)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}


	if(f3==3.509)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}

	if(f3==d)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}

	if(d==3.509)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}

	return 0;
}
