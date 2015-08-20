/* Program to demonastrat local and global variables */
#include<stdio.h>

int result;// Global Variable -Can be accessed from all the functions
int Add(int,int);

int main()
{
    //local variable for main function 
    int a,b;

    printf("Enter Two numbers: ");
    scanf("%d%d",&a,&b);

    //Address of a and b;
    printf("The address of a in main() is %p\n", &a);
    result = Add(a,b);

    printf("The sum of %d and %d is %d", a, b, result);
    return 0;
}
int Add(int a, int b)
{
    printf("The addess of a in the function is %p\n", &a);

//    int result;

    result = a+b;

    return result;
}


