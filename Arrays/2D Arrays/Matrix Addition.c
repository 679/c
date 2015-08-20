#include<stdio.h>
main()
{
	int Mone[3][3],Mtwo[3][3],i=0,j=0,m,n,Mthree[3][3];

	printf("Enter the number of elements in matrix1: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&Mone[i][j]);
		}
	}
	printf("Enter the number of elements in matrix2: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&Mtwo[i][j]);
		}
	}

	/* to add */


for(m=0;m<3;m++)
{
	for(n=0;n<3;n++)
	{
	Mthree[m][n]=Mone[m][n]+Mtwo[m][n];
	printf("%d+%d=%d\n",Mone[m][n],Mtwo[m][n],Mthree[m][n]);
	}

	}
	}	
