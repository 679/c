/* passing structure to a function
   NOTE: that passing a struct by value might use up rather a lot of memory as a complete copy of the structure is made for the function.
 */
#include<stdio.h>

struct comp
{
	int real;
	float imag;
};

/* add function which takes two struct values, and return one struct value */
struct comp add(struct comp a , struct comp b)
{

	struct comp c;

	c.real=a.real+b.real;
	c.imag=a.imag+ b.imag;

	return c;
}
int main()
{
	struct comp a,b, res;

	a.real = 5;
	a.imag = 34.67;

	b.real = 4;
	b.imag = 45.56;

	res = add(a,b);

	/*output*/
	printf("the real part of the sum is: %d\n", res.real);
	printf("the imag part of the sum is: %f\n", res.imag);

	return 0;
}

