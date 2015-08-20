/*
	=> To check if a given number is prime 
	=> To explain the concept of flags in programming
*/
#include<stdio.h>
main()
{
	int isPrime=1, i, num;

	printf("Enter a number to check if it is prime: ");
	scanf("%d",&num);

	for(i=2;i<num;i++)
	{
		if(num%i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	if(isPrime)
	{
		printf("The given number %d is a prime number\n",num );
	}
	else
	{
		printf("%d is not a prime number\n", num);
	}

}
