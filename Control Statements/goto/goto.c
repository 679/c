#include<stdio.h>
main()
{
	int i=10;

home:do
	   {
		   if(i==15)
		   {
			   i++;
			   goto home;
		   }
		   printf("%d\n", i);
		   i++;
	   }while(i<20);
}
