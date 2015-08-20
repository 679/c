#include<math.h>
#include<stdio.h>
typedef struct
{
	int x,y;
} Point;
main()
{
	float Distance;
	int xSquare, ySquare;
	Point p1,p2;
	printf("Enter the two coordinates of  Points p1 and p2: ");
	scanf("%d%d%d%d", &p1.x, &p1.y, &p2.x, &p2.y);
	if ( p1.x > p2.x) xSquare = (p1.x - p2.x)*(p1.x - p2.x); else xSquare = (p2.x - p1.x)*(p2.x - p1.x);
	if ( p1.y > p2.y) ySquare = (p1.y - p2.y)*(p1.y - p2.y); else xSquare = (p2.y - p1.y)*(p2.y - p1.y);
	Distance = sqrt(xSquare + ySquare);
	printf("Distance between the points is %f\n", Distance);
}
