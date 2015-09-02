/* strlen*/
#include<stdio.h>

int  stringlength(char []);

int main()
{
	char a[] = "Android";
	int length = 0;

	length = stringlength(a);
	printf("The length of the string is :%d\n", length);
	return 0;
}

int stringlength(char name[])
{
	int length;

	int i=0;

	while (name[i] != '\0')
	{
		i++;
	}
	return i;
}
