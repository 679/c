#include<stdio.h>
int main()
{
	int r,c,i,j,result=0,Array[10][10];

	printf("Enter two row and columns : ");
	scanf("%d%d",&r,&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &Array[i][j]);
		}
	}

/*	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\n", Array[i][j]);
		}
	}
*/
	for(i=1;i<r-1;i++)
	{
		for(j=1;j<c-1;j++)
		{
			result += Array[i][j];
		}
	}
	printf("the sum is %d\n",result);
}
