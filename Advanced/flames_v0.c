/* program to implement the FLAMES Relationship game 
   Date 05:44pm 24.08.2015, Author: Neo, Catalyst: Siva Ranjani, help: Srinivas
   How it works: it takes two names (strings) as input and try to find the matching character count and identifies the relationship between them using this count.
   if the count is 0 which means either both are names are same or anagrams -> no one can seperate them 
   if the count is 1 - they are sibilings
   F - friends
   L - lovers
   A - Affection
   M - Marriage
   E - Enimies
   S - Sibilings
   */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void flames(int);
int mcc(char *, char *);
int namelength( char *);

int main()
{
	int length=20;
	char boyname[20], girlname[20];
	/*
	char *boyname, *girlname;
	boyname = malloc(sizeof(char)*length);
	girlname = malloc(sizeof(char)*length);

	if(boyname == NULL && girlname ==NULL)
	{
		printf("memory not allocatedThis is bull shit\n"); 
		exit(0);
	}
	*/

	printf("girl's first: ");
	fgets(girlname, 20, stdin);
	//printf("%s\n", girlname);
	//scanf("%s", girlname);

	printf("wats up guys: ");
	fgets(boyname, 20, stdin);
	//printf("%s\n", boyname);
	//scanf("%s", boyname);
	length = mcc(girlname, boyname);
	printf("The matching char count is : %d\n", length);
	flames(length);
	//printf("The relationship between %s and %s is %s\n", flames(mcc(girlname,boyname)));
}

int mcc(char *girl, char *boy)
{
	int l1=0, l2=0, i=0, c=0, j=0;
	l1 = namelength(girl);
	l2 = namelength(boy);

	while ( girl[i]!= '\n' )
	{
		if(isalpha(girl[i]))
		{
	//		l1++;
		}
		else
		{
			i++;
			continue;
		}
		printf("for :%c\n", girl[i]);
		j=0;
		while (boy[j]!='\n')
		{
			if(i==0){
				if(isalpha(boy[j]))
				{
					printf("%c", boy[j]);	
	//				l2++;
				}
			}
			printf("%c ", boy[j]);
			if(girl[i] == boy[j])
			{
				boy[j] = '*';
				printf("i:%d j:%d - %c\n",i,j, boy[j]);
				c++;
				j++;
				//continue;
				break;
			}
			j++;
		}
		i++;
	}
	printf("The length of %s is: %d\n", girl, l1);
	printf("The length of %s is: %d\n", boy, l2);
	printf("The mcc is %d\n", c);
	c = (l1+l2) - (2*c);
	return c;
}

void flames(int count)
{
	switch(count)
	{
		case 0: printf("You cannot be seperated! Have fun\n");
				break;
		case 1: printf("You guys are sibilings! Have fun\n");
				break;
		case 4:
		case 7:
		case 9:
		case 2: printf("You guys are enimies! stay away... j.kidding... afterall this is a program\n");
				break;
		case 5:
		case 3: printf("You guys are friends! cool guys... have lots of fun and adventure\n");
				break;
		case 11:
		case 6: printf("You both together make a great couple, marriages are made in haven\n");
				break;
		case 8: printf("You both have a lot of affection towards each other, keep it up,. \n");
				break;
		case 10: printf("You are the love birds\n");
				 break;
		default: printf("god knows...\n");
	}
}

int namelength(char str[])
{
	int len=0, i=0;

	while(str[i] != '\0' && str[i] != '\n')
	{
		if(isalpha(str[i]))
				{
					len++;
				}
		i++;
	}
	
	return len;
}

