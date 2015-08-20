#include <stdio.h>
void main()
{
	char *s = "hello";
	char *p = s;

	printf("%c %c\n", *p, s[1]);
}
