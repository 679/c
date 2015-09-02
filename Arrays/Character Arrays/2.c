/*strlen is a function which is used to find the length of a string. it is can be accessed by adding the string.h header */
#include<stdio.h>
#include<string.h>
main()
{
	char paragraph[]="Hi, this is to explain that a string can have, spl symbols like ? ! @ # $";

	int size, length;

	size = (int) sizeof(paragraph);
	length = (int)strlen(paragraph);
	printf("size of the para is %d\n", size);
	printf("length of the para is %d\n", length);
}
