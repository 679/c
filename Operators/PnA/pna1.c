/* program to explain precedence and associtivity - Guess the answer */
#include<stdio.h>
int main()
{
	int a=2, b=3, c=4, d=5, e=6, f=7, answer;
	answer = a * b + c * d + e * f; // 392 or 382 or 68 or 96

	printf("GCC: The answer is: %d\n", answer);

	return 0;
}
