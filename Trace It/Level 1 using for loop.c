/* First Level Tracing  using for loop */
#include<stdio.h>
main()
{
	int i=0;
	int n;

	printf("Enter the value: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		i++;
	}
	printf("The value is %d\n",i);
}
