/*Program to explain the assoctivity between assignment '=' and multiplication '*' and division '/' opertors */
#include<stdio.h>
main()
{
	int a=5,b=2;

	a/=b*a/2*10;
	printf("%d\n",a)
}
