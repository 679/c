#include<stdio.h>
int main()
{
	int i,j,length,k, array[10];

scanf("%d",&length);

	for(i=0; i<length; i++)
	{
		scanf("%d", &array[i]);
	}

	for(i=0; i<length;i++)
	{
	  array[i] = array[i]*array[i+1];
	}
	
	for(k=0; k<length;k++)
	{
		for(i=k; i<length-; i++)
		{
			printf("%d ", array[i]);
		}
	}
}
