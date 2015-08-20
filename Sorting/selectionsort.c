*
   Selection Sort - Inplace sorting technique
   Date: Jun 20, 2015 Saturday

   Algorithm
   Step 1: Divide the given list into two portions
   Step 2: Repeatedly pick the smallest element from unsorted portion to append to the sorted portion
   
   Observations 
   After First Iteration: the smallest element comes to the first position
   After N iterations: n elements are sorted

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

int main()
{
	int i, j, minimum, n, *array;

	printf("Enter number of elements in the list: ");
	scanf("%d", &n);

	array = (int*)malloc(sizeof(int)*n);

	printf("enter %d elements: ", n);
	for(i=0;i<n;i++)
		scanf("%d", (array+i));

	for(i=0; i<n-1; i++)
	{
		minimum = i;

		for(j=i+1; j<n; j++)
			if(*(array+j) < *(array+minimum)) minimum = j;
		if (i!= minimum)
		{
			swap((array+i), (array+minimum));
		}

		printf("After Interation %d: ", i);
		for(j=0;j<n;j++)
			printf("%d ", *(array + j));
		printf("\n");
	}

	printf("List of elements after sorting: ");
	for(i=0; i<n; i++)
	{
		printf("%d ", *(array+i));
	}

	printf("\n");

	return 0;
}
