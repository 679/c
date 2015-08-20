#include<stdio.h>
int main()
{
    int i=10; 
    int *p;

    p = &i;

    printf("Address of i is %p\n", &i);
    printf("Address of pointer *p is %p\n", p);
    printf("Value of pointer *p is %d\n", *p);

    return 0;
}
