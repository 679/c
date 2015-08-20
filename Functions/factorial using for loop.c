/* Program to implement factorial */
#include<stdio.h>

int factorial(int);

int main()
{
    int n, result;

    printf("Enter a number to find the factorial of!\n");
    scanf("%d", &n);

    result = factorial(n);
    printf("The factorial of %d is %d\n", n, result);

    return 0;
}

int factorial(int x)
{
    int i = 1, result=1;

    for( ;i <= x;i++)
    {
        result *= i;
    }
    return result;
}
