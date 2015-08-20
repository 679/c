#include<stdio.h>
main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);

	a = a %100;
	a = a/10;

	printf("the 10's digit is %d\n", a);

}
