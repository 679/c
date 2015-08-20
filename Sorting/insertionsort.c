/*
   * Insertion Sort:
   * 
   * worst case time complexity O(n^2)
   * best case time complexity Omeaga(n)
   * 
   * Date: Jun 19, 2015
   *
   *
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, element, i, j, *array, k;

	printf("Enter number of elements to be sorted: ");
	scanf("%d", &n);

	array = (int*)malloc(sizeof(int)*n);

	printf("Enter %d elements to be sorted: ", n);
	for(i=0;i<n;i++)
	{
		scanf("%d", (array+i));
	}

	for(i=1; i<n; i++)
	{
		element = *(array + i);

		j=i;
		while ( j>0 && *(array + (j-1)) > element)
		{
			*(array + j) = *(array + (j-1));
			j--;
		}
		*(array + j) = element;

		//print the elements in the array in each iteration
		printf("Iteration %d: ", i);
		for(k=0; k<n;k++)
		{
			printf("%d ", *(array +k));
		}
		printf("\n");
	}

	printf("List of elements after sorting: ");
	for(i=0; i<n; i++)
	{
		printf("%d ", *(array +i));
	}

	printf("\n");

	return 0;
}
