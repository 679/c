#include<stdio.h>
main()
{
	int number, reverse =0;
	printf("Enter a number to reverse it:");
	scanf("%d", &number);

	while(number)
	{
		reverse *= 10;
		reverse += number % 10;
		number /= 10;
	}

		printf("%d is the reverse of the given number\n", reverse);

}
