/* program to explain pointer arthmetic
Valid:
   - A pointer when incremented always  points to an immediately next location of its type.

Invalid:  
   - Addition of two pointers
   - Multipling a pointer with a number
   - Dividing a pointer with a number
 */
#include<stdio.h>
int main()
{
    int a[] = {10,20,300,4000,5112,60060}, *p,i,n;

    n = sizeof(a)/sizeof(int);
    p = a;
    printf("Values in the array are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n", *(p+i));
    }

    return 0;
}
