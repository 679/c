/* program to add numbers passed through command line */
#include<stdio.h>
 
void main(int argc, char * argv[]) {
	int i, sum = 0;

	if (argc != 3) {
		printf("You have forgot to type numbers.");
		return;
	}

	printf("The sum is : ");

	for (i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);

	printf("%d", sum);

}
