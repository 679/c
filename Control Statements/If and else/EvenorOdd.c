#include<stdio.h>
main()
{
	int num;

	printf("please enter a number to check even or odd: ");
	scanf("%d", &num);

	if(num%2==0)
	{
		printf("The entered number is even\n");
	}
	else
	{
		printf("It's odd\n");
	}


}
