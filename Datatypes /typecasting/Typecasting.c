#include <stdio.h>
int main(){
	char c;
	int i;

	for(i=0;i<256;i++)	
	{
		c=i;
		printf("ASCII value of %d = %d\n", i,c);
	}
	return 0;
}
