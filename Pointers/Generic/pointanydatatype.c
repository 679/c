#include<stdio.h>
int main(){

	char c='A';
	int i=4;
	void *p;
	char *q=&c;
	int *r=&i;

	p=q;
	printf("%c",*(char *)p);

printf("\n");

	p=r;
	printf("%d",*(int *)p);

printf("\n");

	return 0;
}
