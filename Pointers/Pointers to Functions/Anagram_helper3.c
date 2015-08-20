/* this program is to test passing int array */
#include<stdio.h>
#include<stdlib.h>

int * sort(int *, int);

int main()
{
	int *arr,i=0,n;

	do
	{
	printf("Enter number of elements to be sorted: ");
	scanf("%d", &n);
	}while(n<1);

	arr = (int *) malloc (n*sizeof(int));

	if(arr==NULL)
	{
		printf("Memory Not allocated \n");
		return 0;
	}

	printf("Please enter %d numbers!\n",n);


	for (i=0;i<n;i++)
	{
		scanf("%d", &(arr+i));
	}
	for (i=0;i<n;i++)
	{
		printf("%d\n", *(arr+i));
	}

	arr = (int *) sort(arr,n);

	for (i=0;i<n;i++)
	{
		printf("%d\n", *(arr+i));
	}

	return 0;
}

int* sort(int *arr, int size)
{
	int i=0;

	for (i=0;i<size;i++)
	{
	printf("%d", *(arr+i));

	}

}
