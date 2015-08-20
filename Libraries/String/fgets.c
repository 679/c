/* char *fgets(char *str, int n, FILE *stream) 
   reads 0 -> (N-1) chars

   */

#include<stdio.h>
int main()
{
	char ch[50];

	FILE *fp = fopen("./input.txt", "r");
	if (fp != NULL)
	{
		fgets(ch, 1, fp);
		printf("%s\n",ch);
	}
	else
	{
		printf("Not able to open input file\n");
	}

}
