/* Nested structures: structure with in structures */
#include<stdio.h>
struct complex
{
	int imag_value;
	float real_value;
};

struct number{
	struct complex c1;
	int real;
}n1,n2;

int main()
{
	n1.c1.imag_value = 10;

	printf("%d\n", n1.c1.imag_value);

	return 0;
}
