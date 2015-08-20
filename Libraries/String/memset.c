/* void *memset(void *str, int c, size_t n) 
	the memset function is present in the string.h

 */

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10]={65,66,67,68,69,70,71,72,73,74};
	if(ch[10]=='\0')
		printf("%c\n", ch[9]);
	printf("\n The buffer entered is [%s]\n", ch);
	memset(ch,65,sizeof(ch));
	printf("Sizeof(ch):%ld\n",sizeof(ch));
	printf("\n The buffer entered is [%s]\n", ch);
}
