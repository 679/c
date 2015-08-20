#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) 
{
	int i=0, temp;
	temp = *(ar + (ar_size-1));
	printf("\ntemp: %d\n", temp);
	int j;
	for (j=ar_size-1;j>=0; j--)
	{
		if (*(ar+j) > temp)
		{
               *(ar + (j+1)) = *(ar+j);
		}	
		else {
			printf("-assign temp -%d-%d\n\n", *(ar+j), temp);
		//	*(ar+j) = temp;
		}
	}
	for (; j<ar_size; j++)
	{
			printf("\n%d", *(ar+j));
	}
}
int main(void) {
	   
	   int _ar_size;
	   scanf("%d", &_ar_size);
	   int _ar[_ar_size], _ar_i;
	   for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
		      scanf("%d", &_ar[_ar_i]); 
	   }

	   insertionSort(_ar_size, _ar);
	      
      return 0;
}
