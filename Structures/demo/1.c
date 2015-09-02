/**/
#include<string.h>
#include<stdio.h>
struct person
{
	char name[100];
	int subjects[5];
	long int roll_no;
	float salary;
} profile;
int main()
{
	char buf[100] = "Mubashir";
//	struct person profile; // inside main

	strcpy(profile.name, buf);

	profile.subjects[0] = 90;
	scanf("%d", &profile.subjects[0]);
//	profile.name = "pilot";

	profile.roll_no = 160414733046;

	profile.salary=99,999.50;
	printf("%d\n", profile.subjects[0]);

	printf("%s ",profile.name);
	//printf("%s having %ld is getting %f salary",profile.name,profile.roll_no,profile.salary);
	return 0;
}
