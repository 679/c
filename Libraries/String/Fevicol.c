#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * fevicol( char a[], char b[]);
void main()
{
	char strOne[] = "hello", strTwo[] = "world";
	printf("%s", fevicol ( strOne, strTwo ));
}

char * fevicol( char a[], char b[])
{
	char *ans;
	int l1, l2,i=0,j=0;
	l1 = strlen(a);
	l2 = strlen(b);
	ans =	malloc(sizeof(char)*(l1+l2));
	if(ans == NULL){return NULL;}
	while( a[i] != '\0')
	{
		ans[i] = a[i];
	}
	j=0;
	while ( b[j] != '\0')
	{
		ans[i+j] = b[j];
		   j++;	
	}
	return (char *)ans;
}
