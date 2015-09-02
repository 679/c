/*structure with arrays*/
#include<string.h>
#include<stdio.h>
struct person
{
	char name[100];
	long int roll_no;
	float salary;
} x[60],profile;

int main()
{
	char buf[100] = "pilot";
	//	struct person profile; // inside main

	strcpy(x[0].name, buf);

	x[0].roll_no = 46;
	x[0].salary= 10000.00;


	printf("Name is:%s\n", x[0].name);
	printf("Roll_no is:%ld\n", x[0].roll_no);
	printf("Salary is:%f\n", x[0].salary);

	return 0;
}
