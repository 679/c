/* static demo*/
#include<stdio.h>
void fun();
main()
{
	fun();
	{
		int i;
	}
	fun();
	{
		static int as;
	}
	fun();
	fun();
}

void fun()
{
	static int s = 10;
	int a,b,c,d;

	a = 10;
	printf("s: %p and a: %p\n", &s, &a);
//	printf("static s: %d\n", ++s);
//	printf("Auto a: %d\n", ++a);

}
