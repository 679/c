#include<stdio.h>
int increment (int);
int main()
{
	int n,res;
	printf("Enter n:");
	scanf("%d",&n);
	res = increment(n);//1

	printf("Increment is %d", res);//2
}

int increment (int i)
{
	i++;
	return i;
}
