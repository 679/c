/*lol its so funny... i am fup... 
 Behold the confusion that two little parenthesis could have prevented :) +1 for being disciplined enough to say WTF and ask :)


 --> is not an operator. It is in fact two separate operators, -- and >.

 The conditional's code decrements x, while returning x's original (not decremented) value, and then compares the original value with 0 using the > operator.

 To better understand, the statement could be written as follows:

 while( (x--) > 0 )


 */
#include<stdio.h>
int main()
{
	int x = 10;
	while (x --> 0) // x goes to 0
	{
		printf("%d ", x);
	}
}
