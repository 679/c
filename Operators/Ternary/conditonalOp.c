#include<stdio.h>
main()
{
	int a=10,b=12,c=13;

	printf("The biggest of the 3: %d\n", (a>b)?((a>c)?c:a):((b>c)?b:c));
}
