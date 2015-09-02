/* union of two arrays */
#include<stdio.h>
#include<stdlib.h>

void REMOVEDUPLICATES(int a[])
{
	int size, rem_ele_count=0;

	size = sizeof(a)/sizeof(int);

	for ( i=0; i < size ; i++ )
	{
		index = a[i];
		for(j = i+1; j < size; j++)
		{
			if(index == a[j])
			{
				if()
				{
				}
			}
		}	
	}

}
int i,j;

int *a, *b;

int size_a, size_b;

int main()
{
	printf("enter size_a: ");
	scanf("%d", &size_a);
	printf("enter size_b: ");
	scanf("%d", &size_b);


	/*allocating memory for both the arrays*/
	a = malloc(sizeof(int)*size_a);
	b = malloc(sizeof(int)*size_b);

	/* reading data into arrays */
	for(i=0; i < size_a; i++)
	{
		scanf("%d", (a+i));
	}

	for(i=0; i < size_b; i++)
	{
		scanf("%d", (b+i));
	}

	/* function to remove dupilicates */

	REMOVEDUPLICATES(a);

	/* fuction call to find the UNION of the array elements */

	ARRAYUNION(a,b);

}
