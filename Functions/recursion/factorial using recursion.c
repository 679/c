#include<stdio.h>
main()
{
	int n=1;
	printf("n value: ");
	scanf("%d", &n);
	printf("%d\n", fact(n));
}
int fact(int n)
{

	if(n==1) return 1;
	else 
	{
		return n*fact(n-1);
	}
}
