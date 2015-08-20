#include<stdio.h>
main()
{
	int input;
	printf("enter a number: ");
	scanf("%d",&input);

	switch(input%10)
	{
		case 0: printf("Zero\n");
				break;
		case 1: printf("One\n");
				break;

		case 2: printf("Two\n");
				break;
		case 3: printf("Three\n");
				break;

		default: printf("we are now in default case\n");
	}
}
