#include<stdio.h>
int main()
{
	int a,b,result;

	printf("Enter two numbers: ");
	scanf("%d%d", &a,&b);

	result = a + b;

	printf("The Sum of the numbers a and b is: %d\n", result);

	return 0;
}
