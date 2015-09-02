/* program to explain that character arrays should end with '\0' (NULL character) */

#include<stdio.h>
int main()
{
	//char cho[6]= "GOOGLE"; // cho[6];
	char cho[6];
	cho[0] = 'I';
	cho[1] = 'N';
	cho[2] = 'D';
	cho[3] = 'I';
	cho[4] = 'A';
	cho[5] = '\0';
	printf("%s\n", cho);

//	printf("The size of the character array is %lu\n", sizeof(ch));

	return 0;
}
