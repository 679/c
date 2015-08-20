#include<stdio.h>
int main()
{
	int i = 15, j = 16, c;
	
	c = i>>3;
	c = c&1;

	printf("the 4th bit in the number %d is %d\n", i, c);
	printf("the 4th bit in the number %d is %d\n", j, (j>>3)&1);
	
	return 0;
}
