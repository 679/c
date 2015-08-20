#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	char ch;
	int asciivalue;

	printf("Enter a character: ");
	scanf("%c", &ch);

	asciivalue = toascii(ch);

	printf("The upper case of the entered character is %c\n", toupper(ch));
	printf("The ASCII Value of the character %c is %d\n", ch, asciivalue);
}
