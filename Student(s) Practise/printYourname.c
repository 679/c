#include<stdio.h>
main()
{
	char name[8] = "Mubashir";
	int i;
	printf("Enter Your Name:\n");
	for(i=0;i<8;i++)
		scanf("%c",&name[i]);

	for(i=0;i<8;i++)
	printf("%c", name[i]);

}
