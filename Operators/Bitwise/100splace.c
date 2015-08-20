#include<stdio.h>
main()
{
	int n;

	printf("Enter N:");
	scanf("%d",&n);

	n = n*10;
	n = n%1000;
	n = n/100;

	printf("The digit in the 100ths place is: %d\n", n);

}
