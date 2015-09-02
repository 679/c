/* program to pass variable arguments */
#include<stdarg.h>
#include<stdio.h>
void print(int count, ...);

int main()
{
	print(5, 1,'a', '4',6, '$');
}
void print(int count, ...)
{
	va_list arguments;
	int i;
	va_start(arguments, count);
	for(i=0;i<count;i++)
	{
		printf("%d\n", va_arg (arguments, int));
	}
	va_end(arguments);

}
