#include<stdio.h>

float Divide(int, int);/*function prototype declaration*/

int main()
{
    int num2, num1;
    float div;

    printf("Enter two number: ");
    scanf("%d%d",&num1, &num2);

    div = Divide(num1,num2);

    printf("The division of the %d and %d is %f\n", num1, num2, div);

    return 0;
}

float Divide(int x,int y)
{
    float c;
    c = (float)x/y;
    return c;
}

