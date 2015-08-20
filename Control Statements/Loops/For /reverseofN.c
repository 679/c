/* program to print all the numbers from [n..1] in reverse order */
#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the number: ");
	scanf("%d",&n);

	for(i=n;i>0;i--)
	{
		printf("%d\n",i);
	}

}
