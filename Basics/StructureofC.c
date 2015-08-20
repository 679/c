/* This is a Hello world program! 
	Date: Jul 13, 2015
	Author: Prasanth
	Version: 1.0
	It contains one funtion to print a string
	*/
#include<stdio.h>

/*function prototype declaration & global variables*/
int passmark=35;

void main()
{
	printPM();
}

// this is a print function
void printPM()
{
	printf("The pass mark is: %d\n", passmark);
}
