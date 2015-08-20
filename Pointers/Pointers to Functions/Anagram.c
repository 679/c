/* 
   Anagrams - a program to implement  anagram strings 
   Author : Prasanth Vaindam
   Date : July 14, 2015
   Comapre two give strings and return if they are anagrams
   */

#include<stdio.h>
#include<string.h>

char* trimwhitespace(char *);
int* sort (int*, int);
int* convert(char *, int *);

int main()
{
	int i=0, *SL1, *SL2, *iAone, *iAtwo;
	char *sAone, *sAtwo;
	
	/* Reading INPUT STRINGS from File */
	FILE *iFP = fopen("input.txt", "r");
	if(iFP == NULL)
	{
		printf("The input file can't be opened\n");
		return 0;
	}
	else
	{
		fgets(sAone, 10, iFP);
		sAone = trimwhitespace(sAone);

	//	fgets(sAtwo, 10, iFP);
	//	sAtwo = trimwhitespace(sAtwo);
	//	printf("The Second String is: %s\n", sAtwo);
	}

	/* Step2: Converting case sensitive string array into integer Array */
//	iAone = (int*)convert(sAone, SL1);
//	iAtwo = (int*)convert(sAtwo, SL2);

	//printf("Size of String one is: %d\n", i);

	return 0;
}//end of main()

/* Function to string to a Integer Array*/

int* convert(char *str, int *size)
{
	int i=0, *iArray;

	while(*(str+i)!='\0')
	{
		*(iArray+1) = *(str+i);
		if(*(iArray +1)>64 && *(iArray+i)<91)
		{
			*(iArray+i) = *(iArray+i) + 32;
		}
		
		//printf("%c:%d\n", sAone[i],iAone[i]);
		i++;
	}
	*size = i;
	return iArray;
}


/* Function to trim spaces from the input strings */
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

/* Function to sort integer array */
int* sort(int* array, int size)
{
	int element,i,j;

	for(i=1; i<size; i++)
	{
		element = *(array+i);

		for(j=i; j>0 && *(array+j-1) > element ; j--)
		{
			*(array+j) = *(array+j-1);
		}
		*(array+j) = element;
	}

	return array;
}
