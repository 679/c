/* simple void function to explain the control flow
   q. what does void mean ?
   q. how does the control flow
   q. why should i include declaration and defintion ?
 */

void display();
#include<stdio.h> 
int main()
{
	display();
	printf("1. Hello! from main function\n");
	display();
	printf("2. Hello! from main function\n");
	display();
	printf("3. Hello! from main function\n");

	return 0;
}

void display()
{
	printf("Hello, I am display function\n");
}
