/* this program is to describe the character array */
#include<stdio.h>
int main()
{
	int ch[10]={65,66,67,68,69,70,71,72,73,74};
	if(ch[10]=='\0')
		printf("%c\n%c", ch[9], 73);
}
