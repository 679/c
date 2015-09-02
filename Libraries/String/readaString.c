/* char *fgets(char *str, int n, FILE *stream) 
   reads 0 -> (N-1) chars
 */

#include<stdio.h>
int main()
{
	char ch[10];

		fgets(ch, 6, stdin);
		printf("%s\n",ch);
}
