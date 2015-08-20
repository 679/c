/* program to explain pointer arthmetic*/
#include<stdio.h>
main()
{
    char c='A', *cp;
    short s=1, *sp;
    int i=4, *ip;
    
    cp = &c;
    sp = &s;
    ip = &i;
    
    printf("Value of cp: %p\n", cp);
    printf("Value of sp: %p\n", sp);
    printf("Value of ip: %p\n", ip);

    cp++;
    sp++;
    ip++;

    printf("New Value of cp: %p\n", cp);
    printf("New Value of sp: %p\n", sp);
    printf("New Value of ip: %p\n", ip);
}
