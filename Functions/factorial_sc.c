/* Program to implement factorial */
#include<stdio.h>

int factorial(int);
int result=1;
int main()
{
    int n;

    printf("Enter a number to find the factorial of!\n");
    scanf("%d", &n);

    printf("The factorial of %d is %d\n", n, factorial(n));

    return 0;
}

int factorial(int x)
{
    while(x)
    {
        result *= x--;
    }
    return result;
}
