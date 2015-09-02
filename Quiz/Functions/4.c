#include <stdio.h>
void foo();
int main()
{
	void foo(int);//the control comes here first

	foo();

	return 0;
}
void foo()
{
	printf("2 ");
}
