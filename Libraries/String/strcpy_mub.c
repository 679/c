#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int i;
	char a[5]="Mohd",*b;
	b = malloc(5*sizeof(char));
	for(i=0; i<7;i++)
	{
		scanf("%c", b+i);
	}
}

