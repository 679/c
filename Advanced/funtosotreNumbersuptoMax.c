#include<stdio.h>
int main()
{
	int i=0, N;
	char *numbers;

	printf("Enter N value: ");
	scanf("%d", &N);

	N/=8;

	numbers = (char *) calloc ( sizeof(char)*N );

	for(i=0; i<N; i+5)
	{
		
		MajorIndex = i/8;
		MinorIndex = MajorIndex%8;
		xShift = n%8;
		pos = 1<<xShift;

		*(numbers + MinorIndex) = *(numbers + MinorIndex)|pos;
	}

//	reading the number array to check which numbers are present
	int pos=1;

	pos  = pos<<(n%8);
}
