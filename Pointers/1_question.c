#include<stdio.h>
int main()
{
    int i=10; 
    int *p = &i;

    printf("%d", i);  
    printf("%p", &i);
    printf("%p", p);
    printf("%d", *p);

    return 0;
}
