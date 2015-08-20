/* how does comma operator work 
   and why does a its value change incase of printf
   */

#include<stdio.h>
main()
{
	int a=10, i=20,j=10;

	//a = i*10,j*15,i++;
	//	a = i*10,j*15,++i;
	//	printf("%d\n",a);
	//	printf("i:%d\n",i);
	printf("a:%d\n i:%d\n", a=(i*10,j*15,++i),i);
}
