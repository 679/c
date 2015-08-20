#include<stdio.h>

int biggest;

int main()
{
	int a=10,b=11,c=12,d=13,e=14,f=15;

	biggest = (a>b)?((b>c)?a:c):b;
	printf("%d\n",biggest);



}
