/* program to test post increment in the return value */
#include<stdio.h>

int i=1, arr[10]={1,2,3,4,5,6,7,8,9,0};

void main()
{
	int j;
	printf("inital i value is:%d\n", i);
	j =	ret();
	printf("The j value is:%d\n", j);

	printf("i value after function call is:%d\n", i);
}

int ret()
{
	return arr[i++]; 
}
