#include<stdio.h>
int main()
{
	int length=10, sum=0;
	int *p = (int *) malloc( sizeof(*p) * length);

		printf("%p\n", p);
	if ( p == NULL )
	{
		printf("This is fun\n");
	}

	/*
	else
	{
		//read ten numbers
		for(i=0; i<19; i++)
		{
			printf("%p\n", p+i);
			scanf("%d\n", p+i );
			sum = sum + *(p+i);
		}
		printf("The sum is %d\n", sum);
		printf(" This is also fun\n %ld\n", sizeof p);
	}
	*/
	return 0;
}
