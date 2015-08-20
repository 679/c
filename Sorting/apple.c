/*
   Bubble Sort - Inplace sorting technique
   Date: Jun 20, 2015 Saturday

   Algorithm
   Step 1: pass through the list and compare adjcent items , swap if necessary
   Step 2: Repeatedly pick the smallest element from unsorted portion to append to the sorted portion
   
   Observations 
   After First Iteration: the largest element comes is placed in the last position
   After N iterations: n elements are sorted

*/

#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
	int *temp; 
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int i, j, n, *array;

	printf("Enter number of elements in the list: ");
	scanf("%d", &n);

	array = (int*)malloc(sizeof(int)*n);

	printf("enter %d elements: ", n);
	for(i=0;i<n;i++)
		scanf("%d", (array+i));

	//sorting logic

	for( i=n-1; i>=0; i++ )
	{
		for( j=0; j<i; j++ )
		{
			if( *(array+j) > *(array + (j+1))) swap( (array+j) , (array+ (j+1)));
		}

		//print elements in each iteration
		printf("After Iteration %d: ", i+1);
		for(j=0;j<n;j++)
		{
			printf("%d ", *(array+j));
		}
		printf("\n");
	}

		printf("\n");
	printf("List of elements after sorting: ");
	for(i=0; i<n; i++)
	{
		printf("%d ", *(array+i));
	}

	printf("\n");

	return 0;
}
