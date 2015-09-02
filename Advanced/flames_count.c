#include<stdio.h>
#define SIZE 6 //strlenof "flames" is 6
int count = 7; //left out characters after striking out

int main()
{
	int deletedList[5]={-1,-1,-1,-1,-1}, i=0, di, si=0;
	printf("Enter count: ");
	scanf("%d", &count);

	if(count>6){
		while (i<6)
		{
			if(i==0)
			{
				di = (count%(SIZE-i))-1 + si;
				deletedList[i] =  di;
			}
			else
			{
				int j=0;
				si = di+1;
				if(si>5)
				{
					si =si%i;
				}
				for( ;j<5;j++)
				{
					if(si == deletedList[j])
					{
						si++;
						j=0;
						continue;
					}
				}
				di = (count%(SIZE-i))-1 + si;
				{
					int j=0;
					for( ; j<5; j++)
					{
						if(di == deletedList[j])
						{
							di++;
							j=0;
							continue;
						}
					}
				}

				if(di >= SIZE-1)
				{
					int j=0;
					di = di-6;
					for( ;j<5;j++)
					{
						if(di == deletedList[j])
						{
							di++;
							j=0;
							continue;
						}
					}
				}			
				deletedList[i] =  di;
			}
			i++;
		}
	}
	for(i=0; i<5; i++)
	{
		printf("%d\n", deletedList[i]);
	}
}
