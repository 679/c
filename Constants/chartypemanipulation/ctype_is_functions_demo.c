#include<stdio.h>
#include<ctype.h>

int i, punct_c, alphanum_c, alpha_c, ascii_c, blank_c, digit_c, graph_c, printable_c;

int main()
{
	for (i=0; i<256;i++)
	{
		if(isalnum(i))
			alphanum_c++;
		if(isprint(i))
			printable_c++;
		if(ispunct(i))punct_c++;
		if(isblank(i))blank_c++;
		if(isgraph(i))graph_c++;
		if(isdigit(i))digit_c++;
	}

	printf("Total no of printable characters in c are %d\n", printable_c);
	printf("Total no of alphanumeric characters in c are %d\n", alphanum_c);
	printf("Total no of graphical characters in c are %d\n", graph_c);
	printf("Total no of blank characters in c are %d\n", blank_c);
	printf("Total no of digits in c are %d\n", digit_c);
	printf("Total no of punctuation characters in c are %d\n", punct_c);
}
