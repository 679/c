/* to check if a given positive number is a power of two */

#include<stdio.h>
main()
{
	int i = 0;

	printf("Check if the given number is power of two: ");
	scanf("%d",&i);

	i = i && !(i&(i-1));
	if(i == 0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}
