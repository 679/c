/*
   Print the 10's Place digit from the given user input 
   Author: prasanth
   Date : 17, July 2015
*/
#include<stdio.h>
int main()
{
	int i;
	printf("enter a number: ");
	scanf("%d", &i);

	if(i>9)
	{
		i = i/10;
		i = i%10;
		printf("10's Digit is: %d\n", i);
	}
	else
	{
		printf("%d is a single digit number\n",i);
	}
	return 0;
}
