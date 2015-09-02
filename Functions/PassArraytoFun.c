#include<stdio.h>

int total_sum = 0;

int main()
{
    int Array[10]={10,20,30,40,50,60,70,80,90,100};
    
    total_sum = Fun(Array, 10);

	printf("The sum of all the elements in the array is: %d\n", total_sum);
    return 0;
}
int Fun(int A[], int n)
{
	int i=0;

	for(i=0; i < n; i++)
	{
		total_sum +=  A[i];
	}

	return total_sum;
}
