/*
bash-4.1# gcc example.c
-bash-4.1# ./a.out 
preprocessor COUNT variable id not defined
------------------------------------------------------------------------------------------

-bash-4.1# gcc -D COUNT=5 example.c
-bash-4.1# ./a.out 
preprocessor COUNT value is 5
-------------------------------------------------------------------------------------------

-bash-4.1# gcc -D COUNT=0 example.c
-bash-4.1# ./a.out 
preprocessor COUNT value is 0
*/
#include <stdio.h>

int main() {
#if defined(COUNT)
	printf("preprocessor COUNT value is %d\n", COUNT);
#else
	printf("preprocessor COUNT variable id not defined\n");
#endif
}
