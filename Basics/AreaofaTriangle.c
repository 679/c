#include<stdio.h>
#define pi 3.14159
 
int main() {
	float radius, area;

	printf("\nEnter the radius of Circle : ");
	scanf("%f", &radius);

	area = pi * radius * radius;
	printf("\nArea of Circle : %f\n", area);

	return (0);
}
