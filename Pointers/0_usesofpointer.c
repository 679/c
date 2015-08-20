/* There  are two ways to use the pointer to access information:

1: To Store the memory address of another variable (to do so, simple use the name of the pointer w/o the *

2: To access the value stored at the memory address, use the pointer name with the *
 
 */

#include<stdio.h>
int main()
{
    int i;  // i is a normal variable 
    int *p; // p is a pointer variable 

    p = &i;

    printf("Enter a value for i: ");
    scanf("%d",p);
    printf("The address of i is : %u\n", &i);
    printf("The value stored at the memory address %u is %d\n",p,*p);
    
    return 0;
}
