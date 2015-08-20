#include<stdio.h>
main()
{
	int n;

	printf("Enter a number: ");
	scanf("%d",&n);

	n = n/10;
	n = n%10;

	printf("The digit in 10's place is: %d\n", n);
}
