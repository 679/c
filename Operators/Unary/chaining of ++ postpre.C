#include<stdio.h>
void main()
{
int i=1,j;
j = ++i+ ++i+ ++i+ i++ + ++i + i++;
clrscr();
printf("i: %d\n j: %d\n",i,j);
getch();
return ;
}