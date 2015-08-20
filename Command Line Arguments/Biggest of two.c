/* Biggest of two numbers using Command line arguments */
#include<stdio.h>
#include<stdlib.h>

void main( int argc, char * argv[])
{
	int a, b;

//	printf("Enter two number: ");
//	scanf("%d%d", &a, &b);
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if(a>b)
		printf("%d is bigger\n", a);
	else
		printf("%d is bigger\n", b);

}
