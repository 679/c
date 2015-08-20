#include<stdio.h>
int value(int *);
int main()
{
    int i=0;
    int marks[10]={10,20,30,40,50,60,70,80,90,100};
    
    for(i=0;i<10;i++)
	{
		printf("%d\n", value(&marks[i]));
	}

	return 0;
}

int value(int *n)
{
	return *n;
}
