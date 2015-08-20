#include<stdio.h>
int main()
{
	int i=1024;
	char ch = 'v';
	FILE *fp;
	if((fp = fopen("500mb.txt","w"))==NULL)
	{
		printf("Error! opening file");
	//	exit(1);
	}
	while (i>0)
	{
		//fprintf(fp,"%c","a");   
		fputc(ch, fp);
	}
   fclose(fp);
	return 0;
}
