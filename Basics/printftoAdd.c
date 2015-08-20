#include<stdio.h>
main()
{
	int a,b;

	printf("Enter two numbers: ");
	scanf("%d%d",&a, &b);

	printf("The sum of %d and %d is %d!\n", a, b, add(a,b));
}

int add(int x, int y)
{
	return printf("%*c%*c", x,"",y,"");
}
