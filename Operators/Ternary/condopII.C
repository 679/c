/*
   The following program *may* compile, or but fails at runtime. The return type of ternary expression is bounded to type (char *), yet the expression returns int, hence the program fails. Literally, the program tries to print string at 0th address at runtime.
   */
#include <iostream>
using namespace std;
 
int main()
{
	int test = 0;
	cout << test ? "A String" : 0 << endl;

	return 0;
}
