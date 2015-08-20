/* Program to print the squares of all the numbers [1..n] => [1, 2, 4, 9, 16,.. n*n]*/

#include<stdio.h>
main()
{
int i,N;
printf("enter N:");
scanf("%d", &N);
for(i=1; i<=N; i++)
{
printf("square of %d : %d\n", i, i*i);
} 
}
