/**/
#include<stdio.h>
#include<string.h>
void stringcopy(char[], char[]);

int main()
{
	char s[10]="Apple", d[1];
	strcpy(d,s);
	stringcopy(s,d);
}
void stringcopy( char source[], char destination[])
{
	int i=0;

	while (source[i]!='\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i]='\0';
	printf("%s\n",destination);
}
