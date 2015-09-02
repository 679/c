#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input;

	printf("Enter a input: ");
	scanf("%c", &input);

	if(input >='a' && input <= 'z')
	{
		printf("The entered input is in lower case\n");
	}
	if(input >='A' && input <= 'Z')
	{
		printf("The entered input is in upper case\n");
	}
}
