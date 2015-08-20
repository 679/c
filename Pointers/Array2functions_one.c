#include<stdio.h>
void display(int *);
main()
{
    int i=0;
    int marks[10]={10,20,30,40,50,60,70,80,90,100};
    
    for(i=0;i<10;i++)
    {
        display(&marks[i]);
    }
    return 0;
}
void display(int *n)
{
    printf("%d\n",*n);
}
