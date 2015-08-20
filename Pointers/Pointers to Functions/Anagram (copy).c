/* 
   Anagrams - a program to implement  anagram strings 
   Author : Prasanth Vaindam
   Date : July 14, 2015
   Comapre two give strings and return if they are anagrams
   */

#include<stdio.h>
#include<string.h>
#define MAX 100

char *trimwhitespace(char *str);
void sort(int *a);

void main()
{
	int i=0, StrOneLength=0, StrTwoLength=0, iAone[MAX], iAtwo[MAX];
	char *sAone, *sAtwo;

	FILE *iFP = fopen("input.txt", "r");
	if(iFP == NULL)
	{
		printf("The input file can't be opened\n");
	}
	else
	{
		fgets(sAone, 10, iFP);
		printf("The First String is: %s\n", sAone);
		sAone = trimwhitespace(sAone);
		fgets(sAtwo, 10, iFP);
		sAtwo = trimwhitespace(sAtwo);
		printf("The Second String is: %s\n", sAtwo);
	}
	i=0;

	while(sAone[i]!='\0')
	{
		iAone[i] = sAone[i];
		if(iAone[i]>64 && iAone[i]<91)
		{
			iAone[i]+=32;
		}
		
		printf("%c:%d\n", sAone[i],iAone[i]);
		i++;
	}
	printf("Size of String one is: %d\n", i);
}

char *trimwhitespace(char *str)
{
	char *end;

	// Trim leading space
	while(isspace(*str)) str++;

	if(*str == 0)  // All spaces?
		return str;

	// Trim trailing space
	end = str + strlen(str) - 1;
	while(end > str && isspace(*end)) end--;

	// Write new null terminator
	*(end+1) = 0;

	return str;
}
void sort(int *i, int size)
{
	int *iArray, i=0, j=0;

	for(i=0;i<size;i++)
	{
		for(j=
	}
}
