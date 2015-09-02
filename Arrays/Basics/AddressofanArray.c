/* Address of array evalutes to starting address */
#include<stdio.h>
main()
{
	int a[10];

	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);
	printf("%p\n", &a[2]);
	printf("%p\n", &a);
	printf("%p\n", a);
}
