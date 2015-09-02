/* simple void function to explain the control flow
   q. what does void mean ?
   q. how does the control flow
   q. why should i include declaration and defintion ?
 */

#include<stdio.h> 
void display();
int main()
{
	int counter=1;

	display();
	printf("%d. Hello! from main function\n", i++);
	display();
	printf("%d. Hello! from main function\n", i++);
	display();
	printf("%d. Hello! from main function\n", i++);

	return 0;
}

void display()
{
	printf("Hello, I am display function\n");
	//	printf("%d.Hello, I am display function\n", i++);
}
