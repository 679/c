#include<stdio.h>
main()
{
	int input;
	printf("Enter i: ");
	scanf("%d",&input);
	printf("The second bit is: %d\n", input&1);
}
