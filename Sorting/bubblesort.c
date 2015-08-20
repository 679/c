/*
   Bubble sort 
 */
#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
 int temp;
 temp = *x;
 *x = *y;
 *y = temp;
}

main()
{
	int i,j,n,*a,noswap;

	printf("Enter n: ");
	scanf("%d", &n);

	a = (int*)malloc(sizeof(int)*n);

	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	//bubble sort

	for(i=n; i>0; i--)
	{
		noswap=1;
		for(j=0; j<i-1; j++)
		{
			if( *(a+j) > *(a + (j+1)) )
			{
				swap( (a+j), (a + (j+1)) );
				noswap=0;
			}
		}
		if(noswap)break;

		printf("After Iteration %d: ", j);
		for(j=0;j<n;j++)
		{
			printf("%d ", *(a+j));
		}
		printf("\n");
	}

	//print sorted list
	printf("\n\nelements after sorting: ");
	for(i=0;i<n;i++)
		printf("%d ", *(a+i));
	printf("\n");
}
