#include<stdio.h>
int main()
{
	char x[10];
	char y[] = "Hello";
	int i=0;
	while(y[i] != 0)
	{
		*(x+i) = *(y+i);
		i++;
	}
	x[i] = 0;

	printf("%s\n", x);
	return 0;
}
