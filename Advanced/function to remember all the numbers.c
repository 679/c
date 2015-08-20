#include<stdio.h>
#include<stdlib.h>

#define max 1000

	char index[max];
	int n, i, num;

fun(int num)
{
	int id,x,pos=1;
	id = num/8;
	x = x%8;

	pos<<x;

	index[i]|=pos;
}

int main()
{

	printf("Enter N value: ");
	scanf("%d\n", &n);
	printf("Enter %d values: ",n);

	for (i=0; i<n; i++)
	{
		scanf("%d", &num);
		fun(num);
	}
int p,ls=1;
	for(i=0; i<max; i++)
	{
		p = i/8;
		x = 
		p = i++;
		printf("%d", index[i]);
	}
}
