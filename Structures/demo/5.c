/* how to access a struct members through pointer variables */
#include<stdio.h>
typedef struct Students
{
	char* name;
	int id;
} std;

int main()
{
	std student, *s;

	s = &student;
	//	s->id = 2; common mistake
	scanf("%d", &s->id);
	printf("%d\n", s->id);

	return 0;
}
