/*
warning : lvalue required as increment operand
   x++ is the short form of x = x + 1. However, x here is an array and you cannot modify the address of an array. So is the case with your variable y too. What you can do is defined two pointers pointing to the two arrays and increment those pointers or do the following.
   */


#include<stdio.h>
main()
{
char x[10];
 char y[] = "Hello";
  while(y != NULL)
	      *x++ = *y++;
  printf("%s\n",x);
}
