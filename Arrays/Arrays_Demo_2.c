#include<stdio.h>
main()
{
	int array[10],i;
	printf("Enter 10 elements to store into array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("The 10 numbers entered are: ");
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}

	printf("The  address of the 10 elements");
	for(i=0;i<10;i++)
	{
		printf("Address of array[%d] is %u\n",i, &array[i]);
	}
}
