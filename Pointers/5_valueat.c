/* Declaring two pointers variables */
#include<stdio.h>
int main()
{
    char c1 = 'A', c2 = 'B'; 
    char *p1, *p2 ;

    p1 = &c1;
    p2 = p1;

    *p2 = 'C';

    printf("%c\n", *p1); 
    printf("%c\n", *p2); 


    return 0;
}
