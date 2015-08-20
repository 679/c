#include<stdio.h>
main()
{
	int 	i, OnesC, TwosC;

	printf("Enter i: ");
	scanf("%d",&i);

	OnesC = ~i;
	TwosC = OnesC + 1;
	printf("One's complement of %d is : %d \n", i, OnesC);
	printf("Two's complement of %d is : %d \n", i, TwosC);
}
