/* Program to explain that character constants are integer and they are backed with ascii values 
   This program is also used to explain that you can use character constants are integers*/
#include<stdio.h>
main()
{
	int i, counter=1;
	printf("S.NO | \"Char-constants\" | ASCII Values \n");
	printf("--------------------------------------- \n");
	for(i='A'; i<='Z'; i++)
	{
		printf("%3d\t\t\'%c\'\t%9d\n",counter++, i, i);
	}
	printf("\n");
}
