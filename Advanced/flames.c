#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void flames(int);
int mcc(char *, char *);
int namelength( char *);
char* removespace(char str[])
{
	int i=0,j=0,size;
	size = strlen(str);
	char * strns = (char*) malloc(sizeof(char)*size);

	while(str[i]!='\0' && str[i]!='\n')
	{
		if(isblank(str[i]))
		{
			i++;
			continue;
		}
		if(isalpha(str[i]))
		{
			strns[j++] = str[i++];
		}
	}
	printf("%s\n", strns);
	printf("%zu\n", strlen(strns));
	return (char*)strns;
}

int main()
{
	int matching_char_count=0, b_name_len=0, g_name_len=0, left_out_cc=0;
	char boyname[20], girlname[20];
	char *girl, *boy;


	printf("girl's first: ");
	fgets(girlname, 20, stdin);
	girl =	removespace(girlname);
	g_name_len = (int) strlen(girl);

	printf("wats up guys: ");
	fgets(boyname, 20, stdin);
	boy = removespace(boyname);
	b_name_len = (int) strlen(boy);

	matching_char_count = mcc(girl, boy);
	printf("the no of striked out characters are: %d\n", matching_char_count);
	left_out_cc = (g_name_len + b_name_len) - (2*matching_char_count);
	flames(left_out_cc);
}

int mcc(char *girl, char *boy)
{
	int count=0, i=0, j=0;
	while( girl[i] != '\0')
	{
		j=0;
		while( boy[j] != '\0')
		{
			if(girl[i] == boy[j])
			{
				count++;
				boy[j] = '*';
				break;// we found a match so, we need to increment i value.
			}
			j++;
		}
		i++;
	}
	return count;
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
