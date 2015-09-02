#include<stdio.h>
main()
{
	int min,list[]={10,53,93,15,27,1,9};
	int size,i;
	size = sizeof (list)/sizeof(int);
	min=list[0];
	for(i=1;i<size;i++)
	{
		if(min>list[i])
		{
			min=list[i];
		}
	}
	printf("min:%d\n",min);
}
