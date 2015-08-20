/* program to explain pointer arthmetic
Valid:
   - Addition of a number to a pointer 
   - Substraction of a number to a pointer is possible
   - A pointer when incremented always  points to an immediately next location of its type.

Invalid:  
   - Addition of two pointers
   - Multipling a pointer with a number
   - Dividing a pointer with a number
 */
#include<stdio.h>
main()
{
    char c='A', *cp;

    cp = &c;
    printf("Value of cp: %p\n", cp);

    cp +=4;
    printf("New Value of cp: %p\n", cp);

    cp = cp -2;
    printf("New Value of cp: %p\n", cp);
}
