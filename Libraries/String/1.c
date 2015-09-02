/* program to explain that character arrays should end with '\0' (NULL character) */

#include<stdio.h>
int main()
{

	char cho[7]; // cho[6];
	cho[0] = 'G';
	cho[1] = 'O';
	cho[2] = 'O';
	cho[3] = 'G';
	cho[4] = 'L';
	cho[5] = 'E';
	cho[6] = '\0';
	printf("%s\n", cho);

//	printf("The size of the character array is %lu\n", sizeof(ch));

	return 0;
}
