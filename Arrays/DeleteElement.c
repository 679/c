#include<stdio.h>
main()
{
    int i=0, x=0;
    int a[6]= {10}, found=0;


    printf("Enter 6 numbers to store in the array: ");

    for(i=0;i<=5;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a number to delete: ");
    scanf("%d", &x);

    for(i=0;i<=5;i++)
    {
        if (x == a[i])
        {
            found = 1;
            if(i<5)
            {
                while (i<5)
                {
                    a[i] = a[i+1];
                    i++;
                }
            }else if(i==5)
            {
                a[i] = 0;
            }
            break;
        }
    }

    if(found)
    {

    for(i=0;i<5;i++)
        printf("%d\n",a[i]);
    }else
    {
        printf("%d is not found\n", x);
    for(i=0;i<=5;i++)
        printf("%d\n",a[i]);
    }
}
