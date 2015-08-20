#include<stdio.h>
void main()
{
	int *ip, i;

	i =10;

	ip = (int *)malloc(sizeof(int));

	*ip = i;

	printf("%d\n",i);

	printf("%d\n",*ip);

}
