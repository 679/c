#include<stdio.h>
int main()
{
	int num1,num2,result;
	printf("enter the two numbers");
	scanf("%d%d",&num1,&num2);
	result=biggest(num1,num2);
	printf("The largest of two numbers is %d\n",result);

	return 0;
}
int biggest(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}	
