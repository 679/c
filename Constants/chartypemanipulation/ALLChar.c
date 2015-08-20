/* program to print all characters in c */
#include<stdio.h>
main()
{
	int i;
	printf("S.NO | \"Char-constants\" | ASCII Values \n");
	printf("--------------------------------------- \n");
	for(i=0; i<=255; i++)
	{
		printf("%d \"%c\"\n", i,i);
	}
	printf("\n");
}
