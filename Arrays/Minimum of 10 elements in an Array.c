#include<stdio.h>
main()
{
int a[10],i, min;

printf("Enter 10 numbers:");
for(i=0;i<10;i++)
{
 scanf("%d",&a[i]);
}

min = a[0];

for(i=1;i<10;i++)
{
 if(a[i]<min)
 {
   min = a[i];
 }
}
printf("The minimum element in the array is:%d\n",min);
}
