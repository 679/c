/* Program to find a value x in the array */

#include<stdio.h>
main()
{
	int x, i, array[10], ifoundx = 0;

	//step 1 => read and store 10 elements in the array 

	for ( i = 0 ; i < 10 ; i++)
	{
		printf("Enter a number : ");
		scanf("%d", &array[i]);
	}

	// step 2 => read a input x to search in the array
	printf(" Enter a number to search : " );
	scanf("%d", &x);

	// step 3 => start searching if x is present in the array

	for (i=0;i<10;i++)
	{
		if(x == array[i])
		{
			ifoundx = 1;
			printf(" the element is found at the index: %d", i);
			break;
		}
	}
	if(ifoundx == 0)
	{
		printf("sorry, the number x %d is not present in the array\n",x);
	}

}
