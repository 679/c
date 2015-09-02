/* program to union */
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i,j,k,size_r,size_a, size_b;
	int *a, *b, *r;

	printf("Enter size of first array: ");
	scanf("%d", &size_a);
	printf("Enter size of second array: ");
	scanf("%d", &size_b);

	a = malloc(sizeof(int)*size_a);
	b = malloc(sizeof(int)*size_b);

	printf("Enter %d elements to store in first array: ", size_a);
	for(i=0;i<size_a;i++)
	{
		scanf("%d",(a+i));
	}
	printf("Enter %d elements to store in second array: ", size_b);
	for(i=0;i<size_b;i++)
	{
		scanf("%d",(b+i));
	}

	size_r = size_a + size_b;

	r = malloc(sizeof(int)*size_r);

	k=0;

	for(i=0; i < size_a; i++)
	{
		*(r+k++) = *(a+i);
		for(j=0; j < size_b; j++)
		{
			if(*(a+i) == *(b+j))
			{
				*(b+j) = -1;
				continue;
			}
			*(r+k++) = *(b+j);
		}
	}

	printf("The elements after union: \n");
	for(i=0; i < size_r; i++)
	{
		printf("%d\n", *(r+i));
	}
	return 0;
}
