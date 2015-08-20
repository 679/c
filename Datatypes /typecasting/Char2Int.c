// The program to convert char to int.

#include<stdio.h>
int main(int argc, char* argv[])
{
int iValue;
//char chValue='500';
char chValue;

chValue = *argv[--argc];
iValue = *argv[--argc];
//iValue = chValue-'0';
printf("%d", iValue);
return 0;
}
