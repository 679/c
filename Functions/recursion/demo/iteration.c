/*iteration vs recursion why runs for more time?  */
#include<stdio.h>
int main()
{
	static int count;
	for(; ;)
	{
		printf("%d\n", count++);
	}
}
