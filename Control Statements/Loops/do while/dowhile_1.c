#include<stdio.h>
main()
{
	int n,cond;

	do{
		printf("enter a num:");
		scanf("%d",&n);
		cond=(0<=n&&n<=9);
	}while(cond);

}
