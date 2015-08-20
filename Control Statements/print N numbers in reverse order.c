/* program to print the all number from N till One in reverese order */
#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the number: ");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		n = n - i;
		printf("%d\n",n);
	}

}
