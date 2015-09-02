/* fix the bug in this program */
#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch, lc, uc;
	int asciivalue;

	printf("Enter a character: ");
	scanf("%c", &ch);

	asciivalue = toascii(ch);
	lc = tolower(ch);
	uc = toupper(ch);

	printf("Upper case of %c is%c \n",ch, uc);
	printf("lower case of %c is %c\n",ch, lc);
	printf("ASCII Value of %c is %d\n", ch, asciivalue);

	return 0;
}
