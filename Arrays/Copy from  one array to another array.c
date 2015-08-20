/* program to copy from array to another array*/
#include<stdio.h>
main()
{
    int a[10], b[10],i=0;

    printf("enter the value of 10 no's");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        
        b[i]=++a[i];
        printf("%d",b[i]);
    }
}
