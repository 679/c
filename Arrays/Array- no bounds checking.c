/* program to explain that there is no bounds checking in Arrays */
#include<stdio.h>
int main()
{
	int i = 0xfaaaafff09fff;
	int A[i];
	printf("%d\n", A[i]);
	return 0;
}
