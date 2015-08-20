#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0;
	char *p = (char *)malloc (100);

	if(p==NULL) printf("memory not allocated\n");
	else 
	{
		printf("Enter 100 chars: \n");
		for(i=0;i<100;i++)
			scanf("%d", &(p+i));
		for(i=0;i<100;i++)
			printf("%d", *(p+i));
	}

	return 0;
}
