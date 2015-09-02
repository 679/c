/* don't use nested functions */
#include <stdio.h>
void m();
/*
void n()
{
	m();
}
*/

void main()
{
	void m()
	{
		printf("hi");
	}
}
