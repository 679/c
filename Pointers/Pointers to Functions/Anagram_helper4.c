#include<stdio.h>
#include<stdlib.h>

int* sort (int*, int);

int main()
{
	int i,j,n,element;
	int *arr;

	printf("Enter number of elements to be sorted (2..6): ");
	scanf("%d", &n);

	arr  =	(int *)malloc(sizeof(int)*n);

	printf("Enter %d values, to sort! \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d", (arr+i));
	}
	arr = (int*) sort(arr, n);
	
	printf("The elements after sorting are: \n");

	for(i=0;i<n;i++)
	{
		printf("%d\n", *(arr+i));
	}

	return 0;
}

int* sort(int* array, int size)
{
	int element,i,j;

	for(i=1; i<size; i++)
	{
		element = *(array+i);

		for(j=i; j>0 && *(array+j-1) > element ; j--)
		{
			*(array+j) = *(array+j-1);
		}
		*(array+j) = element;
	}

	return array;
}
