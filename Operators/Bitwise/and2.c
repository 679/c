/* 
  &2
  
  
 */
#include<stdio.h>
main()
{
	int i;

	for(i=0; i<=9; i++)
	{
		printf("The second bit in the number [%d] is [%d]\n", i, (i&2)?1:0);
	}

}
