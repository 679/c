#include<stdio.h>
int main()
{
	int n, count = 0;
	printf("Enter a number: ");
	scanf("%d", &n);

	if(n==0)
	{
		count++;
	}
	else
	{
		while(n)
		{
			count++;
			n = n/10;
		}
	}
	printf("The number of digits %d\n",count);
}
