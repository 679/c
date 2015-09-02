/* program to explain that stringliterals are terminated with implicit null character */
#include<string.h>
#include<stdio.h>

int main()
{
	/*string literals are placed in double quotes*/
	char str[5] = "Apple";
	char str1[25] = "Apple"; 
	char str2[] = "APPLE";

	printf("str:%s\t length: %zu\t sizeof(str)is: %lu\n", str, strlen(str), sizeof(str));

	printf("str1:%s\t length: %zu\n", str1, strlen(str1));
	printf("str2:%s\t length: %zu\n", str2, strlen(str2));

	printf("The size of the str1 character array is %lu\n", sizeof(str1));
	printf("The size of the str2 character array is %lu\n", sizeof(str2));

	return 0;
}
