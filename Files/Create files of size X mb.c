/* 
 * this is a program which takes size and name toben given to create a file
 * 
 */

	unsigned long long int size = 1024*1024*2048ULL;
#include<stdio.h>
int main ( int argc, char *argv[] )
{
	int MB = atoi(argv[2]);
	printf("%d\n\n", MB);
	//unsigned long long int size = 1024*1024*MB;
	char ch = 'v';
	FILE *fp;

	printf("size in bytes :%llu\n\n", size);
	
	if ( argc != 3 ) /* argc should be 2 for correct execution */
	{
		/* We print argv[0] assuming it is the program name */
		printf( "usage: %s filename", argv[0] );
	}

	if((fp = fopen(argv[1],"w"))==NULL)
	{
		printf("Error! opening file");
		//	exit(1);
	}
	if (size == 1024*1024*2047) { 
		printf("size %llu is 2047 MBbytes!", size);
		size /= 2047;
		printf("size %llu is 2047 MBbytes!", size);
		size *= 2048;
		printf("size %llu is 2047 MBbytes!", size);
	
	}
	while (size>0)
	{
		fputc(ch, fp);
		size--;
		//fprintf(fp,"%c","a");   
	}
	fclose(fp);
	
	return 0;
}
