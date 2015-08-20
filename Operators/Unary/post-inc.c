/* this program is to explain pre and post */

#include<stdio.h>
main()
{
	int a=10,b;

	b = a++;//post - increment
	printf("b:%d\n",b);

	b = a;

	printf("b:%d\n",b);
}
