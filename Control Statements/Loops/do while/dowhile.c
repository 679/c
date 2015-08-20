#include<stdio.h>
main()
{
	int n,sum=0;

	do{
		printf("enter a num:");
		scanf("%d",&n);

	
		sum=sum+n;
	}while(0!=n);
printf("sum-%d",sum);
}
