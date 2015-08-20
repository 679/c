/*program to explain explicit type casting 
  explicit type casting is the process of converting bigger data type into smaller type.

  */
#include<stdio.h>
main()
{
	int i=1024;
	char c;

	c = (char)i;
	i = c;
	printf("The value of c is %d\n", c);
}
