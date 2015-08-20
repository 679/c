#include<stdio.h>
main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);

	n = n%100;
	n = n%10;
	printf("The unit digit no n is %d\n", n);
}
