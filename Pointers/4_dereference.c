/*
 1.  p =  &i; ==> now on wards p can be used in the place of &i;
 2. *p ==> dereferencing the pointer; you are taking the reference to some memory address and following it, to retrieve the actual value.
       */
#include<stdio.h>
int main()
{
    int i=10, j=30; 
    int *p = &i;

    j = *p;

    printf("%d", j);

    return 0;
}
