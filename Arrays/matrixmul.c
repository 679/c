/* program for matrix multiplication*/
#include<stdio.h>
main()
{
	int sum=0,a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={1,0,0,0,1,0,0,0,1},c[3][3]={0},i,j,k;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
			sum += a[i][k]*b[k][j];
			}
		c[i][j] = sum;
		sum = 0;
		}
	}
	printf("Product:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}
