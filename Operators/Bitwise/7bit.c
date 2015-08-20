/* 
  &7 => to find if the seventh bit in a number is set to 1 or 0
 */
#include<stdio.h>
main()
{
	int i;

	for(i=64; i<=512; i++)
	{
		printf("The seventh bit in the number [%d] is [%d]\n", i, (i&127)?1:0);
	}

}
