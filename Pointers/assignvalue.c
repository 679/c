#include<stdio.h>

main()
{
	int a,*ip;
	
	ip = &a;

	*ip = a;

	printf("%ld %ld\n", ip, &a);

	printf("%d %d\n", *ip+*ip, a+a);

}
