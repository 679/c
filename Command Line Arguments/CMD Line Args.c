// Program to demonestrate command line arguments

#include<stdio.h>

int main (int argc, char *argv[])
{
	printf("The number of command line arguments sent are: %d\n", argc-1);
	while (argc > 1)
	{
		argc--;
		printf("%s\n", argv[argc]);
	}
	// Check if command line arguments are present or not.

//	if (argc > 2)
//	{
//		printf("The no of command line parameters sent are %d", argc);
//		while (argc != 0){
//			printf("%s\n", argv[argc--]);
//		}
//	}// command line arguments are sent.
//	else printf("No command line arguments to print!\n");
}
