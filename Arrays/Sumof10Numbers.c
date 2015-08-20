/* Program to add 10 numbers using arrays */

#include<stdio.h>
main()
{
	int sum=0, i, array[10];
	
	for ( i = 0 ; i < 10 ; i++)
	{
		printf("Enter a number : ");
		scanf("%d", &array[i]);

		sum = sum + array[i];
	}

	printf("The sum of the 10 elements is: %d\n", sum);
}	
