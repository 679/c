#include<stdio.h>
void print();
main()
{
    print();
    print();
    print();
}

void print()
{
    static int i=0;
    int j=0;
     printf("i: %d\n",++i);
     printf("j: %d\n",++j);
}
