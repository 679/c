#include <stdio.h>
#include <time.h>

int main()
{        
	/* initialize */
	int y=2015, m=5, d=26;    
	struct tm t = { .tm_year=y-1900, .tm_mon=m-1, .tm_mday=d };
	/* modify */
	t.tm_mday += 65;
	mktime(&t);
	/* show result */
	printf(asctime(&t)); /* prints: Sun Mar 16 00:00:00 1980 */
}
