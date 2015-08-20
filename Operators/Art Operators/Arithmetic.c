/* loss of fractional part from division */
#include<stdio.h>
int main()
{
	float a,b,div;

	printf("Enter two numbers: ");
	scanf("%f%f",&a,&b);

	div = a/b;

//	printf("The sum is : %d\n",sum);
//	printf("The diff is : %d\n",diff);
//	printf("The reminder is : %d\n",reminder);
//	printf("The mul is : %d\n",mul);
	printf("the div is : %f\n",div);

	return 0;
}
