/* program to find the tagline for a given grade 
   to explain the advantage of switch case
 */

#include<stdio.h>
int main()
{
	char input;

	printf("Enter the grade: ");
	scanf("%c",&input);

	switch(input)
	{
		case 'a':
		case 'A': printf("Congratulations!... you got distinction\n");
				  break;
		case 'b':
		case 'B': printf("Above average\n");
				  break;
		case 'C': printf("avg\n");
				  break;
		case 'D': printf("poor\n");
				  break;
		case 'F': printf("fail\n");
				  break;
		default: printf("invalid case\n");
	} 
}
