#include<stdio.h>
main()
{
	int avg,m,p,c;

	printf("Enter Maths marks: ");
	scanf("%d",&m);

	printf("Enter Physics marks: ");
	scanf("%d",&p);
	printf("Enter Chemistry marks: ");
	scanf("%d",&c);
	
	avg = (m+p+c)/3;
	printf("Your Average is: %d\n", avg);
}
