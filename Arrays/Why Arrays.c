/* Why Arrays - Advantages of arrays */
#include<stdio.h>
main()
{
    int i=0;
    int subjects[6]= {10};

    printf("Enter 6 numbers to store in the array: ");
/*
	scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    scanf("%d", &a[3]);
    scanf("%d", &a[4]);
    scanf("%d", &a[5]);
*/
    for(i=0;i<=5;i++)
    {
        scanf("%d", &a[i]);
    }


    printf("The elements in the array are: ");
    //printf("%d\n",a[0]);
    //printf("%d\n",a[1]);
    //printf("%d\n",a[2]);
    //printf("%d\n",a[3]);
    //printf("%d\n",a[4]);
    //printf("%d\n",a[5]);

    for(i=0;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }
}
