/* string copy */

#include<stdio.h>

/* how to declarea functionprotype*/
void stringcopy(char [], char []);

int main()
{
	char s[] = "Abrakadbra", d[100];
	printf("&s[0] ==> %p\n", &s[0]);
	printf("s     ==> %p\n", s);
	stringcopy(d,s);
}

void stringcopy(char destination[], char source[])
{
	int i=0;

	while(source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	printf("%s\n", destination);
}
