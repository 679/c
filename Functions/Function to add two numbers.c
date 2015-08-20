#include<stdio.h>
main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    Add(a,b);

}

int Add(int a, int y)
{
    int z;
    z = a + y;

    printf("The sum of the two numbers is: %d\n", z);

    return z;
}
