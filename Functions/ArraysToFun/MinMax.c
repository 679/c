#include<stdio.h>

/*
   only the reference
   */

int Maximum(int [], int);
int Minimum(int [], int);
float Average(int [], int );

int main()
{
	int i, array[3];

	printf("enter 3 numbers: \n");
	for(i=0;i<3;i++)
	{
		scanf("%d", &array[i]);
	}

	printf("the minimum element is : %d\n", Minimum(array));

	printf("the maximum element is : %d\n", Maximum(array));
	printf("the Average of all the elements is: %f\n", Average(array, 3));

}

int Maximum(int elements[])
{
	int max,i=0,size = sizeof(elements)/sizeof(int);

	
	max = elements[0];

	while(i++ < size)
	{
		if(max < elements[i])
		{
			max = elements[i];
		}
	}
	return max;
}

int Minimum(int elements[], int size)
{
	int min, i=0;
	
	min = elements[0];

	while(i++ < size)
	{
		if(min > elements[i])
		{
			min = elements[i];
		}
	}
	return min;
}

float Average(int elements[], int size)
{
	int i=0, sum=0;
	float avg =0;

	while(i < size)
	{
		sum += elements[i];
		i++;
	}
//	printf("sum: %d\n",sum);
	avg = (float) sum/size;

	return avg;
}
