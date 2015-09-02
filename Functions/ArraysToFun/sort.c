#include<stdio.h>

int i, j, size;

void sort(int array[], int size)
{
	printf("entered function:--%d\n", size);
	for(i=0;i<10;i++)
	{
		printf("%d\n", array[i]);
	}
	for(i=0; i < size; i++)
	{
		for(j=1+i; j < size; j++)
		{
			if(array[i] > array[j])
			{
				int temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	/* print sorted elements */
	printf("sorted array -->\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n", array[i]);
	}
}

int main()
{
	int numbers[10];

	printf("enter 10 numbers: ");
	for(i=0;i<10;i++)
	scanf("%d", &numbers[i]);

	size = sizeof(numbers)/sizeof(int);
	/*function call to sort an array */
	sort(numbers, size);
}
