/* program to explain that there is no bounds checking in Arrays */
#include<stdio.h>
int main()
{
	int i=0;
	int A[2]= {1,2,3};
	printf("%d\n", A[13000]);
	return 0;
}
