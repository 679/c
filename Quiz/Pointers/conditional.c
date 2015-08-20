#include<stdio.h>
main()
{
	int a,b,res;
	printf("Enter a & b: ");
	scanf("%d%d",&a,&b);

	res = (a>b)?a:b;

	printf("the bigger among %d and %d is %d\n",a,b,res);
}
