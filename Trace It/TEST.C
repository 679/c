#include<stdio.h>

void main()
{
 int res, i=1;
 res = ++i + ++i + ++i + ++i + ++i;
 printf("\nres: %d\n", res);
 getch();
}