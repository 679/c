#include<stdio.h>
void Display (int *);

int main()
{
    int i=10;
    
    printf("The address of i is %p\n", &i);

    Display(&i);

    return 0;
}

void Display(int *p)
{
    printf("The address of pointer *p is %p\n", p);

    printf("The value passed is %d\n", *p);
}
