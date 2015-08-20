#include<stdio.h>
main()
{
	int n;

	printf("Enter the number: ");
	scanf("%d", &n);

	n = n/100;
	n = n/10;

	printf("The digit in 100s place is: %d\n", n);
}
