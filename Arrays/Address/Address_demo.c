/*The name of an array usually evaluates to the address of the first element of the array, so array and &array have the same value (but different types, so array+1 and &array+1 will not be equal if the array is more than 1 element long).
  */

#include<stdio.h>
main()
{
	//char array[16] = {'A','B','C','D'};
	int i=0;
	int array[16];

//	printf("array  %p \n ++array  %p\n", array, array+1);
	for(i=0;i<16;i++)
		printf("%u\n", &array[i]);
//	printf("&array %u \n &array+1 %u\n", &array[0], &array[1]);
}

