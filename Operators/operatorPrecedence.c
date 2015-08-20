/* Operator precedence: determines  which operator is performed in a experession with more than one operators.
 - When two operators are of equal precedence, then associtivty is checked
 - L->R or R->L

 
 */

#include<stdio.h>
int main()
{
	int arthmeticops, aops, preincop, postincop, i=1;

	aops = 3-2*4/3*3;
	printf(" res:%d statement_res:%d\n",aops, 3-2*4/3*3);

	arthmeticops = 3*40/10%2;
	printf(" res: %d   statement_res: %d\n", arthmeticops, 3*40/10%2);

	preincop = ++i;
	printf("%d\t%d\n", preincop, i);

	postincop = i++;
	printf("%d\t%d\n", postincop, i);

}
