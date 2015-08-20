#include <stdio.h>
#include <time.h>

int main()
{        
	/* initialize */
	int y=1980, m=2, d=5;    
	struct tm t = { .tm_year=y-1900, .tm_mon=m-1, .tm_mday=d };
	/* modify */
	t.tm_mday += 40;
	mktime(&t);
	/* show result */
	printf(asctime(&t)); /* prints: Sun Mar 16 00:00:00 1980 */
}
