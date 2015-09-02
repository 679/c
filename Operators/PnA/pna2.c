/* program to explain assignment operator 
   why does x = y = z = 10 work ?
   x = (y = (z = 10))
   side effects: 
 */

#include<stdio.h>
int main()
{
	int x, y, z;
//	x = y = z = 10;
   x = (y = (z = 10))
	printf("%d\n", x);
}
