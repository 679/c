/* Program to explain the Array address */
#include<stdio.h>
main()
{
	char  i, Array[5] = {1,2,3,4};
	printf("Size of Int is: [%d] Bytes\n",sizeof(i));
	for(i=0; i<5;i++)
	{
		printf("%u \n", (Array+i) );
	}
}
